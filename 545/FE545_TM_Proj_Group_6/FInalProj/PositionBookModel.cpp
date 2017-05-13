#include "PositionBookModel.h"
#include "SystemLog.h"

PositionBookModel::PositionBookModel(map<string,int> &map){
    positionBook = &map;
//    positionBook->insert()
    positionBook->insert(make_pair("aaon", 198));
    positionBook->insert(make_pair("abmd", 148));
    positionBook->insert(make_pair("avhi", 108));
    positionBook->insert(make_pair("flws", 98));
    positionBook->insert(make_pair("goog", 98));
    positionBook->insert(make_pair("srce", 319));
};

int PositionBookModel::updatePositionBook(map<string, int> & updatedmap) {
    updatedpositionBook = &updatedmap;
//    updatedpositionBook->insert(make_pair("mllefef", 198));
//    updatedpositionBook->insert(make_pair("mllefef", 8888));
//    updatedpositionBook->insert(make_pair("mllqeqe", 148));
//    updatedpositionBook->insert(make_pair("aaon", 9999));
    return 0;
}

const map<string, int> PositionBookModel::submitOrderBook()  {
//    map<string,int>::iterator at=rebalance_after.begin();
//    map<string, int> *tempMap=NULL;

    map<string, int> deltaMap;
    if(updatedpositionBook!=NULL){
        for ( map<string,int>::iterator it=updatedpositionBook->begin(); it!=updatedpositionBook->end(); it++){
            string sk = it->first;
            int deltaP = it->second - positionBook->operator[](sk);

            if(positionBook->count(it->first)){
                deltaMap.insert(make_pair(it->first,deltaP));
            } else{
                deltaMap.insert(make_pair(it->first,it->second) );
            }
            SystemLog::getInstance()->savetoFile(sk);
            SystemLog::getInstance()->savetoFile(deltaP);
        }

//        for ( map<string,int>::iterator it=deltaMap.begin(); it!=deltaMap.end(); it++)
//            cout <<it->first<< "+=|=+" <<it->second << endl;

    //    tempMap = &deltaMap;
//        for (int i = 0; i < 20; ++i)
//            cout << "testing in side finised"<<i<< endl;
    }

//    return *tempMap;
    return deltaMap;
};

const map<string, int> &PositionBookModel::getPositionBook(){
    if(updatedpositionBook==NULL)
        return *positionBook;
    else
        return *updatedpositionBook;
};

//map<string,int>* PositionBookModel::getInstance(){
//
//    //lazy mode singleton
//    if (p_log == NULL)
//        p_log = new SystemLog();
//    return p_log;
//}
