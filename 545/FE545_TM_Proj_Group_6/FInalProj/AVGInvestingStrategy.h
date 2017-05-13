
#ifndef FINALPROJ_AVGINVESTINGSTRATEGY_H
#define FINALPROJ_AVGINVESTINGSTRATEGY_H


#include "InvestingStrategy.h"

class AVGInvestingStrategy: public InvestingStrategy {
public:
//    map<string, double> & StockScoringStrategy(vector<string> &vector) override;
    map<string, int>  StockInvestingStrategy(vector<string> &vector) override;
//    double StockScoringStrategy(vector<string> &vector) override;

};


#endif //FINALPROJ_AVGINVESTINGSTRATEGY_H
