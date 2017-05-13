#ifndef FINALPROJ_YAHOOAPI_H
#define FINALPROJ_YAHOOAPI_H
#include <iostream>
#include <string>
#include "downloadFile.h"
//#pragma comment(lib, "urlmon.lib")
#include <map>
using namespace std;

class YahooAPI {

public:
    void getQuote(map<string, double> &scoredMap);
};


#endif //FINALPROJ_YAHOOAPI_H
