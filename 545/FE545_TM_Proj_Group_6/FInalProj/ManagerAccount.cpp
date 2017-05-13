//
// Created by Mr.Late on 4/26/17.
//

#include "ManagerAccount.h"
ManagerAccount* ManagerAccount::managerAccount = NULL;
//ManagerAccount* ManagerAccount::currentPositionBook = NULL;
ManagerAccount* ManagerAccount::getManagerAccount(){

    //lazy mode singleton
    if (managerAccount == NULL)
        managerAccount = new ManagerAccount();
    return managerAccount;
}

double ManagerAccount::updatePositionBook(PositionBookModel &positionBookModel) {

    currentPositionBook = &positionBookModel;
    return 0;
}