
#include "iostream"
#include <regex>
#include <sstream>
using namespace std;
#include "AVGInvestingStrategy.h"
map<string, int>   AVGInvestingStrategy::StockInvestingStrategy(vector<string> &vector) {
    cout<< "StockInvestingStrategy is AVGInvestingStrategy\n";

    stringstream strstream;
    map<string,int> stockUnitsMap;
    double investing_per_stock = totalWealth / vector.size();
    double tempPrice = 0;
    int units = 0;
    for (int i =0; i < vector.size(); i ++) {

        int index = vector[i].find(",");
        string stockName = vector[i].substr(0,index);
//        cout << "stockName=" << stockName << endl;
        string stockprice= vector[i].substr(index+1);

        strstream << vector[i].substr(index+1);
        strstream >> tempPrice;
        strstream.clear();

        units = investing_per_stock / tempPrice;

//        cout << "units="<<units << endl;

        stockUnitsMap.insert(make_pair(stockName, units));
    }

    cout << "leaving...AVGInvestingStrategy::StockInvestingStrategy"  << endl;

    return stockUnitsMap;
}