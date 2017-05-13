//
// Created by Mr.Late on 5/5/17.
//

#ifndef FINALPROJ_EMPLOYEEIDSYSTEMLOGIN_H
#define FINALPROJ_EMPLOYEEIDSYSTEMLOGIN_H


#include "SystemLogin.h"

class EmployeeIDSystemLogin : public SystemLogin {
private:
    const string ADMIN_ID = "9999";
    int checkID(string &p);
public:
    void login_success();
    void login_failure();
    void welcome_info();
    void system_exit();
    void displaySystemtime();
    void login_validation(string &p);
};


#endif //FINALPROJ_EMPLOYEEIDSYSTEMLOGIN_H
