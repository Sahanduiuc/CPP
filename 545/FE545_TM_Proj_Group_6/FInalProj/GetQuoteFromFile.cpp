#include <iostream>
#include "GetQuoteFromFile.h"
string *GetQuoteFromFile::getPriceFileName(map<string, double> &scoredMap)   {
    std::cout<<"getting price for provided stock name from File......"<<endl;
    savetoLocalFile();
    std::string stk_price_file = "YahooAPIstockpriceinfo.txt";
    return &stk_price_file;
};

void GetQuoteFromFile::savetoLocalFile() {
    std::cout<<"saving stock price info to local file now..."<<endl;
};