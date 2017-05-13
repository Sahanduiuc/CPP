#ifndef FINALPROJ_GETQUOTE_H
#define FINALPROJ_GETQUOTE_H

#include <string>
#include "InvestingStrategy.h"

/*
Yahoo API Dataset
Ticker	Opening Price	Closing Price	Time
GOOG	130.7	145.1	04222017
APPL	140.9	145.1	04222017
FLWS	113.9	145.1	04222017
*/

class GetQuote {

public:
    virtual string *getPriceFileName(map<string, double> & scoredMap) = 0;
    virtual void savetoLocalFile() = 0;

};


#endif //FINALPROJ_GETQUOTE_H
