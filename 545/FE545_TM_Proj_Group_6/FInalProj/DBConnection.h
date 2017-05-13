//
// Created by Mr.Late on 5/5/17.
//

#ifndef FINALPROJ_DBCONNECTION_H
#define FINALPROJ_DBCONNECTION_H


#include <string>
#include <iostream>
#include <list>

using namespace std;
class DBConnection {
    int value;
public:
    DBConnection() : value(1001) {}
    void reset() { value = 1001; }
    int getValue() { return value; }
    void setValue(int number){
        value = number;
        cout << "value=" <<value<< endl;
    }
};


#endif //FINALPROJ_DBCONNECTION_H
