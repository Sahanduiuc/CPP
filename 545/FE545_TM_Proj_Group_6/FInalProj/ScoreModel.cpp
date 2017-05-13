//
// Created by Mr.Late on 4/26/17.
//
#include <vector>
#include "ScoreModel.h"
void ScoreModel:: addStockScore(string s,double d){
    scoreModelMap.insert(make_pair(s, d));
//    scoreModelMap[s] = d;
};

void ScoreModel:: setStrategy(ScoringStrategy& sstgy){
    this->scoringStrategy = &sstgy;
};

//const map<string, double> &ScoreModel::getStockScoreModel(vector<string> & vecINTF) {
const map<string, double> ScoreModel::getStockScoreModel(vector<string> & vecINTF) {
    scoreModelMap = scoringStrategy->StockScoringStrategy(vecINTF);

//      map<string,double> Kmap(scoringStrategy->StockScoringStrategy(vecINTF));
//      scoreModelMap = &Kmap;
//      scoreModelMap(scoringStrategy->StockScoringStrategy(vecINTF));
//    return scoreModelMap;
//    map<string,double> scoredMap;
//    scoredMap=scoreModel.getStockScoreModel(rawdataentry);

//    map<string, double> Kmap2;
//    Kmap2=scoringStrategy->StockScoringStrategy(vecINTF);

//    for ( map<string,double>::iterator it=Kmap.begin(); it!=Kmap.end(); it++) {
//        cout <<it->first<< "' score-=-=-=- is: " <<it->second << endl;
//    }
//    cout << "coming ScoreModel" << endl;
//    return Kmap2;
    return scoringStrategy->StockScoringStrategy(vecINTF);;

//    map<string,double> scoredMap = scoringStrategy->StockScoringStrategy(vecINTF);
//    return scoredMap;
//        return scoringStrategy->StockScoringStrategy(vecINTF);

    //    for ( map<string,double>::iterator it=scoredMap.begin(); it!=scoredMap.end(); it++) {
//        cout <<it->first<< "' score is: " <<it->second << endl;
//    }

        return scoreModelMap;

//    return scoringStrategy->StockScoringStrategy(vecINTF);
};




ScoreModel::ScoreModel(){
//    cout << "****ScoreModel constructoe....." << endl;
};

//ScoreModel::ScoreModel(vector<string> & vector){
////    用于遍历
//    cout << "****ScoreModel....." << endl;
//    for (size_t i =0; i < vector.size(); i ++) {
//        cout<<vector[i]<<endl;
//    }
//    cout << "****ScoreModel....." << endl;
//};