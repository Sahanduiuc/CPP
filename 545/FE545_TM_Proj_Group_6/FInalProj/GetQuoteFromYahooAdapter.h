//
// Created by Mr.Late on 5/4/17.
//

#ifndef FINALPROJ_GETQUOTEFROMYAHOO_H
#define FINALPROJ_GETQUOTEFROMYAHOO_H


#include <iostream>
#include "GetQuote.h"
#include "YahooAPI.h"

class GetQuoteFromYahooAdapter : public  GetQuote{
    YahooAPI yahooAPI;
public:
    string *getPriceFileName(map<string, double> &scoredMap) override;
    void savetoLocalFile() override;
};


#endif //FINALPROJ_GETQUOTEFROMYAHOO_H
