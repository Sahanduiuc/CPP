//
// Created by Mr.Late on 5/3/17.
//

#ifndef FINALPROJ_SCORINGSTRATEGY_H
#define FINALPROJ_SCORINGSTRATEGY_H
#include <vector>
#include <map>
using namespace std;
class ScoringStrategy  {
//    public: virtual double StockScoringStrategy(vector<string> & vector)=0;
    public: virtual map<string, double> StockScoringStrategy(vector<string> & vector)=0;
//    public: virtual map<string, double> StockInvestingScoringStrategy(vector<string> & vector)=0;
//    public: virtual map<string, double> & StockScoringStrategy(vector<string> & vector)=0;
};


#endif //FINALPROJ_SCORINGSTRATEGY_H
