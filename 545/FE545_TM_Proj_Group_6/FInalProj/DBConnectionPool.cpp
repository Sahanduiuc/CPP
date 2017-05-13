//
// Created by Mr.Late on 5/5/17.
//

#include "DBConnectionPool.h"
//static DBConnectionPool* DBConnectionPool::getInstance() {
//    static DBConnectionPool instance;
//    return &instance;
//}
DBConnection* DBConnectionPool::getResource() {
    if (resources.empty()) {
        return new DBConnection;
    } else {
        DBConnection* resource = resources.front();
        resources.pop_front();
        return resource;
    }
}
void DBConnectionPool::returnResource(DBConnection* object) {
    object->reset();
    resources.push_back(object);
}