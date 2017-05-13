//
// Created by Mr.Late on 5/4/17.
//

#ifndef FINALPROJ_INVESTINGSTRATEGY_H
#define FINALPROJ_INVESTINGSTRATEGY_H


#include <vector>
#include <map>
using namespace std;
class InvestingStrategy  {
    public:
    const double totalWealth = 10000;
    virtual map<string, int> StockInvestingStrategy(vector<string> & vector)=0;
};



#endif //FINALPROJ_INVESTINGSTRATEGY_H
