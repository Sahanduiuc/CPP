#include "GetQuoteFromYahooAdapter.h"
string *GetQuoteFromYahooAdapter::getPriceFileName(map<string, double> &scoredMap)   {
    std::cout<<"getting price for provided stock name from Yahoo......"<<endl;

    //return a map<string, double>
    //map<string, double> priceInfo = yahooAPI.getQuote(map<string, double> & scoredMap);

    yahooAPI.getQuote(scoredMap);

    //save this map<string, double> priceInfo  into a local file
    savetoLocalFile();
    std::string stk_price_file = "YahooAPIstockpriceinfo.txt";
    return &stk_price_file;
};

void GetQuoteFromYahooAdapter::savetoLocalFile() {
    std::cout<<"saving stock price info from yahoo to local file now..."<<endl;
};