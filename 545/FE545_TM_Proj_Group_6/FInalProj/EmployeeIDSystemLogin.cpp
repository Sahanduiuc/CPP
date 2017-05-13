//
// Created by Mr.Late on 5/5/17.
//

#include "EmployeeIDSystemLogin.h"
void EmployeeIDSystemLogin::login_success(){
    welcome_info();
}

void EmployeeIDSystemLogin::login_failure(){
    cout << LOGIN_FAILURE_INFO << endl;
    cout << SYSTEM_EXIT_INFO << endl;
    system_exit();
}
void EmployeeIDSystemLogin::welcome_info(){
    //*****Welcome page
    cout << LOGIN_SUCCESS_INFO << endl;
    displaySystemtime();
}

void EmployeeIDSystemLogin::system_exit(){
    exit(999);
}

void EmployeeIDSystemLogin::displaySystemtime(){
    tm* system_time  = localtime(&timestamp);   //data type: struct
    printf("%d-%02d-%02d %02d:%02d:%02d\n",
           system_time->tm_year + 1900,
           system_time->tm_mon + 1,
           system_time->tm_mday,
           system_time->tm_hour,
           system_time->tm_min,
           system_time->tm_sec);
};

void EmployeeIDSystemLogin::login_validation(string &p){
    if(!checkID(p))
        login_failure();
    login_success();
}

int EmployeeIDSystemLogin::checkID(string &p){
    if(p==ADMIN_ID){
        return 1;
    }
    return 0;
};