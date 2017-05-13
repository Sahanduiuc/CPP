//
// Created by Mr.Late on 4/26/17.

#ifndef FINALPROJ_POSITIONBOOKMODEL_H
#define FINALPROJ_POSITIONBOOKMODEL_H
#include <map>
#include "StockModel.h"

using namespace std;
class PositionBookModel {
//    map<StockModel,int> first;
//    string stockNmae;
//    double holdingUnits;
    //stock, holding unit
    map<string,int> *positionBook=NULL;
    map<string,int> *updatedpositionBook=NULL;

public:

    PositionBookModel(map<string,int> &map);
//    map<string,int>* getPositionBookModel();
    const map<string, int> &getPositionBook() ;
    const map<string, int> submitOrderBook() ;
    int updatePositionBook(map<string, int> &updatedmap);

};


#endif //FINALPROJ_POSITIONBOOKMODEL_H
