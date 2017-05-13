//
// Created by Mr.Late on 4/26/17.
//

#ifndef FINALPROJ_SCOREMODEL_H
#define FINALPROJ_SCOREMODEL_H
#include <map>
#include "StockModel.h"
#include "ScoringStrategy.h"

using namespace std;

class ScoreModel {
private:
    ScoringStrategy *scoringStrategy;
//    map<string,double> * scoreModelMap=NULL;
    map<string,double> scoreModelMap;

public:
//    ScoreModel(vector<string> & vector);
    ScoreModel();
    void setStrategy(ScoringStrategy& sstgy);
    void addStockScore(string s,double d);
//    const map<string, double> &getStockScoreModel(vector<string> & vector) const;
//    const map<string, double> &getStockScoreModel(vector<string> & vector) ;
    const map<string, double> getStockScoreModel(vector<string> & vector) ;

};


#endif //FINALPROJ_SCOREMODEL_H
