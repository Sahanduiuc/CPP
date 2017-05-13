//
// Created by Mr.Late on 5/5/17.
//

#include <sstream>
#include "DBSystemLogin.h"
void DBSystemLogin::login_success(){
    welcome_info();
}

void DBSystemLogin::login_failure(){
    cout << LOGIN_FAILURE_INFO << endl;
    cout << SYSTEM_EXIT_INFO << endl;
    system_exit();
}
void DBSystemLogin::welcome_info(){
    //*****Welcome page
    cout << LOGIN_SUCCESS_INFO << endl;
    displaySystemtime();
}

void DBSystemLogin::system_exit(){
    exit(999);
}

void DBSystemLogin::displaySystemtime(){
    tm* system_time  = localtime(&timestamp);   //data type: struct
    printf("%d-%02d-%02d %02d:%02d:%02d\n",
           system_time->tm_year + 1900,
           system_time->tm_mon + 1,
           system_time->tm_mday,
           system_time->tm_hour,
           system_time->tm_min,
           system_time->tm_sec);
};

void DBSystemLogin::login_validation(string &p){
    if(!checkDB(p))
        login_failure();
    login_success();
}

int DBSystemLogin::checkDB(string &p){
    cout << "connecting to database..." << endl;
    pool = DBConnectionPool::getInstance();
    dbconn = pool->getResource();
//    dbconn = DBConnectionPool::getInstance()->getResource();
    dbconn->setValue(9999);
    string result;
    stringstream strstream;
    strstream << dbconn->getValue();
    strstream >> result;
    strstream.clear();
    pool->returnResource(dbconn);
    if(p==result){
        cout << "Database validation passed..." << endl;
        return 1;
    } else{
        return 0;
    }
};