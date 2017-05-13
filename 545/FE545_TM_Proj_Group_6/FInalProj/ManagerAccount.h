//
// Created by Mr.Late on 4/26/17.
//

#ifndef FINALPROJ_MANAGERACCOUNT_H
#define FINALPROJ_MANAGERACCOUNT_H


#include "PositionBookModel.h"
#include <map>
class ManagerAccount {
    double remainingMoneyAccount;

    //totalWealth is 1M in USD
    //for example: totalWealth = $0(Long) + $0(Short) + $1000 cash  = $1000
    double totalWealth = 1000000;

    static ManagerAccount* managerAccount;
//    static PositionBookModel* currentPositionBook;
    PositionBookModel* currentPositionBook= NULL;
private:
//    ManagerAccount(PositionBookModel &positionBookModel){
    ManagerAccount(){
//        currentPositionBook =  new PositionBookModel(positionBookModel);
//        currentPositionBook =  new PositionBookModel(*positionBook);
    }


public:
    static ManagerAccount* getManagerAccount();
    double updatePositionBook(PositionBookModel &positionBookModel);
};


#endif //FINALPROJ_MANAGERACCOUNT_H
