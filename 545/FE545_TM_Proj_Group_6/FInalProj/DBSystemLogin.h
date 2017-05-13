#ifndef FINALPROJ_DBSYSTEMLOGIN_H
#define FINALPROJ_DBSYSTEMLOGIN_H

#include "DBConnectionPool.h"
#include "SystemLogin.h"

class DBSystemLogin : public SystemLogin {
private:
    const string ADMIN_ID = "9999";
    DBConnectionPool *pool = 0;
    DBConnection *dbconn = 0;
    int checkDB(string &p);
public:
    void login_success();
    void login_failure();
    void welcome_info();
    void system_exit();
    void displaySystemtime();
    void login_validation(string &p);
};


#endif //FINALPROJ_DBSYSTEMLOGIN_H
