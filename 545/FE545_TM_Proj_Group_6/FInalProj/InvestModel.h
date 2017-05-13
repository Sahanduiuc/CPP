//
// Created by Mr.Late on 5/4/17.
//

#ifndef FINALPROJ_GETQUOTEFROMFILE_H
#define FINALPROJ_GETQUOTEFROMFILE_H


#include "GetQuote.h"
#include "FileUtil.h"

//class InvestModel: public GetQuote {
class InvestModel {
    InvestingStrategy *investingStrategy;
    FileUtil fileUtil;
    string fileName;

public:
    InvestModel(string fileName);
//    InvestModel();
//    const map<string, int> getPositionBook(string fileName);
    const map<string, int> getPositionBook();

    void setInvestingStrategy(InvestingStrategy& ivstgy);



};


#endif //FINALPROJ_GETQUOTEFROMFILE_H
