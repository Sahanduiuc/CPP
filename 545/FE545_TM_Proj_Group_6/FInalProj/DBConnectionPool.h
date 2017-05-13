#ifndef FINALPROJ_DBCONNECTIONPOOL_H
#define FINALPROJ_DBCONNECTIONPOOL_H

#include "DBConnection.h"

using namespace std;
class DBConnectionPool {
    list<DBConnection*> resources;
    DBConnectionPool() {}
public:
//    static DBConnectionPool* getInstance() ;
    DBConnection* getResource() ;

    void returnResource(DBConnection *object);

    static DBConnectionPool* getInstance() {
        static DBConnectionPool instance;
        return &instance;
    }
//    DBConnection* getResource() {
//        if (resources.empty()) {
//            return new DBConnection;
//        } else {
//            DBConnection* resource = resources.front();
//            resources.pop_front();
//            return resource;
//        }
//    }
//    void returnResource(DBConnection* object) {
//        object->reset();
//        resources.push_back(object);
//    }
};


#endif //FINALPROJ_DBCONNECTIONPOOL_H
