#ifndef FINALPROJ_GETQFILE_H
#define FINALPROJ_GETQFILE_H

#include "GetQuote.h"

class GetQuoteFromFile : public  GetQuote{
    public:
//    GetQuoteFromFile(){};
    void savetoLocalFile();
    virtual string *getPriceFileName(map<string, double> & scoredMap) ;
};

#endif //FINALPROJ_GETQFILE_H
