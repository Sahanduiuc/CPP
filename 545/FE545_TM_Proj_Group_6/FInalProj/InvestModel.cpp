//
// Created by Mr.Late on 5/4/17.
//

#include <vector>
#include "InvestModel.h"
void InvestModel:: setInvestingStrategy(InvestingStrategy& ivstgy){
    this->investingStrategy= &ivstgy;
};

//InvestModel::InvestModel( ){
InvestModel::InvestModel(string fileName ){
    this->fileName = fileName;
//    vector<string> rawpriceentry= fileUtil.readfromFile(fileName);
    ////用于遍历
//    cout << "****inGetQuoteFromFile" << endl;
//    for (size_t i =0; i < rawpriceentry.size(); i ++) {
//        cout<<rawpriceentry[i]<<endl;
//    }
//    cout << "****" << endl;
}

const map<string, int> InvestModel::getPositionBook() {
//const map<string, int> InvestModel::getPositionBook(string fileName) {
    vector<string> rawpriceentry= fileUtil.readfromFile(fileName);
    ////用于遍历
//    cout << "****inGetQuoteFromFile" << endl;
//    for (size_t i =0; i < rawpriceentry.size(); i ++) {
//        cout<<rawpriceentry[i]<<endl;
//    }
//    cout << "****" << endl;


    map<string, int> positionBook;
    positionBook = investingStrategy->StockInvestingStrategy(rawpriceentry);

//      map<string,double> Kmap(scoringStrategy->StockScoringStrategy(vecINTF));
//      scoreModelMap = &Kmap;
//      scoreModelMap(scoringStrategy->StockScoringStrategy(vecINTF));
//    return scoreModelMap;
//    map<string,double> scoredMap;
//    scoredMap=scoreModel.getStockScoreModel(rawdataentry);

//    map<string, double> Kmap2;
//    Kmap2=scoringStrategy->StockScoringStrategy(vecINTF);

//    for ( map<string,double>::iterator it=Kmap.begin(); it!=Kmap.end(); it++) {
//        cout <<it->first<< "' score-=-=-=- is: " <<it->second << endl;
//    }
//    cout << "coming ScoreModel" << endl;
//    return Kmap2;
    return investingStrategy->StockInvestingStrategy(rawpriceentry);


//    if(updatedpositionBook!=NULL){
//        for ( map<string,int>::iterator it=updatedpositionBook->begin(); it!=updatedpositionBook->end(); it++){
//            string sk = it->first;
//            int deltaP = it->second - positionBook->operator[](sk);
//
//            if(positionBook->count(it->first)){
//                deltaMap.insert(make_pair(it->first,deltaP));
//            } else{
//                deltaMap.insert(make_pair(it->first,it->second) );
//            }
//            SystemLog::getInstance()->savetoFile(sk);
//            SystemLog::getInstance()->savetoFile(deltaP);
//        }
//
////        for ( map<string,int>::iterator it=deltaMap.begin(); it!=deltaMap.end(); it++)
////            cout <<it->first<< "+=|=+" <<it->second << endl;
//
//        //    tempMap = &deltaMap;
////        for (int i = 0; i < 20; ++i)
////            cout << "testing in side finised"<<i<< endl;
//    }

//    return *tempMap;
//    return positionBook;

};