#include <iostream>
#include <map>
#include <regex>
#include <sstream>
#include "minmax.h"
#include "math.h"
#include "StockModel.h"
#include "PositionBookModel.h"
#include "SystemLogin.h"
#include "SystemLog.h"
#include "FileUtil.h"
#include "AVGScoringStrategy.h"
#include "ScoreModel.h"
#include "SortUtil.h"
#include "InvestModel.h"
#include "AVGInvestingStrategy.h"
#include "EmployeeIDSystemLogin.h"
#include "DBSystemLogin.h"
#include "GetQuoteFromFile.h"
#include "GetQuoteFromYahooAdapter.h"

using namespace std;

int main() {
///*
    //****** type ID to enter this system
    cout << "Welcome! please type your ID to enter this system" << endl;
    string input_ID;
    cin >> input_ID;

    //****** check ID; welcome or exit
//    SystemLogin systemLogin;
//    systemLogin.login_validation(input_ID);
//    SystemLogin *systemLogin = new EmployeeIDSystemLogin();
    SystemLogin *systemLogin = new DBSystemLogin();
    systemLogin->login_validation(input_ID);

    //****** open log
    SystemLog::getInstance()->savetoFile(input_ID);
//*/

    //****** Reading Stock Info
    cout << "Reading Stock assessment information..." << endl;

//    string  stk_assessment_fil= "NasdaqDataTest.txt";

    string stk_assessment_fil = "NasdaqDataTest.txt";


    FileUtil fileUtil;

    vector<string> rawdataentry= fileUtil.readfromFile(stk_assessment_fil);



    //****** Reading Stock Info finished! we will have a vector here
    cout << "Reading Stock Info finished! we will have a vector here" << endl;

    //Scoring the stocks
    cout << "Scoring the stocks...." << endl;

//    ScoreModel scoreModelMap(rawdataentry);
    ScoreModel scoreModel;
    AVGScoringStrategy simple_AVG_ScoringStrategy;
    scoreModel.setStrategy(simple_AVG_ScoringStrategy);
    map<string,double> scoredMap = scoreModel.getStockScoreModel(rawdataentry);

//    for ( map<string,double>::iterator it=scoredMap.begin(); it!=scoredMap.end(); it++)
//        cout <<it->first<< "' score<>is: " <<it->second << endl;

//    shortMap wont be operated here, but it can be extend later by changing the SortUtil
    cout << "******** long the top 6 scores ********" << endl;
    map<string,double > long_6_Map = SortUtil::getSortedTop6(scoredMap);

    cout << "******** geting quote  ********" << endl;
//*****  giving a map ---> map<string,double > long_6_Map
//    GetQuote *getQuote = new GetQuoteFromFile();
    GetQuote *getQuote = new GetQuoteFromYahooAdapter();
    string * stk_price_file = getQuote->getPriceFileName(long_6_Map);
//*****  return a file name

    string stok_price_file = "YahooAPIstockpriceinfo.txt";
    cout << stok_price_file << endl;
    cout << "******** calculating the holding units now********" << endl;

    InvestModel getQuoteFromFile(stok_price_file);
    AVGInvestingStrategy simple_AVG_InvestingStrategy;
    getQuoteFromFile.setInvestingStrategy(simple_AVG_InvestingStrategy);

//    map<string, int> APRorderBook =getQuoteFromFile.getPositionBook(stk_price_file);
    map<string, int> APRorderBook =getQuoteFromFile.getPositionBook();

        for ( map<string,int>::iterator it=APRorderBook.begin(); it!=APRorderBook.end(); it++) {
        cout <<it->first<< "' position<>is: " <<it->second << endl;
    }


    cout << "finishing investing stocks.... and going to submit the order book now" << endl;
    map<string,int> MarchPositionBook;
//    cout<<"MarchPositionBook is generated "<<endl;
    PositionBookModel pbm(MarchPositionBook);
    pbm.updatePositionBook(APRorderBook);

//    map<string, int> shasha = pbm.getPositionBook();

    map<string, int> orderBook = pbm.submitOrderBook();
    cout <<"the limit order book is:" << endl;

    for ( map<string,int>::iterator it=orderBook.begin(); it!=orderBook.end(); it++)
        cout <<it->first<< "|" <<it->second << endl;

    SystemLog::getInstance()->closeLog();

//    StockModel *sm = new StockModel();

    return 0;
}




/*
 ****************|****************
 //    StockModel stockModel;
//    StockModel stockModel("dd", 34.3);

//    StockModel APPL("APPL", 10);
//    StockModel CMCM("CMCM", 10);


    //    map<StockModel,int> stmk;
//    stmk[CMCM] = 13;
//    stmk[APPL] = 12;
//    cout << stmk[CMCM]<< endl;  // this way is not working

//    map<char *,int> first;
//    first["a"]=10; first["b"]=30; first["c"]=50; first["d"]=70;
 ****************|****************
*/

