//
// Created by Mr.Late on 5/3/17.
//

#ifndef FINALPROJ_WEIGHTEDAVGSCORINGSTRATEGY_H
#define FINALPROJ_WEIGHTEDAVGSCORINGSTRATEGY_H


#include "ScoringStrategy.h"

class WeightedAVGScoringStrategy : public ScoringStrategy{
public:
    map<string, double>  StockScoringStrategy(vector<string> &vector) override;
};



#endif //FINALPROJ_WEIGHTEDAVGSCORINGSTRATEGY_H
