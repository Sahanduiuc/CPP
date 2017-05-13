
#ifndef FINALPROJ_AVGSCORINGSTRATEGY_H
#define FINALPROJ_AVGSCORINGSTRATEGY_H

#include <map>
#include "ScoringStrategy.h"

class AVGScoringStrategy : public ScoringStrategy{
public:
//    map<string, double> & StockScoringStrategy(vector<string> &vector) override;
    map<string, double>  StockScoringStrategy(vector<string> &vector) override;
//    double StockScoringStrategy(vector<string> &vector) override;
};


#endif //FINALPROJ_AVGSCORINGSTRATEGY_H
