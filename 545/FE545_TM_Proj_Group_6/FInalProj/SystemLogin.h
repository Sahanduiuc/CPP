
//  这个可以写成template 模式

#ifndef FINALPROJ_WELCOMEUTIL_H
#define FINALPROJ_WELCOMEUTIL_H
#include <iostream>
#include <time.h>
using namespace std;
class SystemLogin {
protected:
    time_t timestamp = time(NULL);              //data type: timestamp
    const string LOGIN_FAILURE_INFO = "This ID number is not recoginzed by the system.";
    const string LOGIN_SUCCESS_INFO = "Commander! \n Welcome to Thigh League Portfolio Management System";
    const string SYSTEM_EXIT_INFO = "System logging off... ";
    const string CODE_RETYPE_INFO = "Please retype your ID: ";

    virtual void login_success()=0;
    virtual void login_failure()=0;
    virtual void welcome_info()=0;
    virtual void system_exit()=0;
    virtual void displaySystemtime()=0;

//    void login_success(){
//        welcome_info();
//    }
//    void login_failure(){
//        cout << LOGIN_FAILURE_INFO << endl;
//        cout << SYSTEM_EXIT_INFO << endl;
//        system_exit();
//    }
//    void welcome_info(){
//        //*****Welcome page
//        cout << LOGIN_SUCCESS_INFO << endl;
//        displaySystemtime();
//    }
//
//    void system_exit(){
//        exit(999);
//    }
//
//    void displaySystemtime(){
//            tm* system_time  = localtime(&timestamp);   //data type: struct
//            printf("%d-%02d-%02d %02d:%02d:%02d\n",
//            system_time->tm_year + 1900,
//            system_time->tm_mon + 1,
//            system_time->tm_mday,
//            system_time->tm_hour,
//            system_time->tm_min,
//            system_time->tm_sec);
//    };

public:
    virtual void login_validation(string &p) =0;
};


#endif //FINALPROJ_WELCOMEUTIL_H
