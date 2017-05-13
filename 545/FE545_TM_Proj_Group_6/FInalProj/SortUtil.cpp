//
// Created by Mr.Late on 5/4/17.
//

#include "SortUtil.h"
//SystemLog* SystemLog::getInstance(){
//static const map<string, double> SortUtil::getSortedTop6(map<string, double> & scoredMap) {
 const map<string, double> SortUtil::getSortedTop6(map<string, double> & scoredMap) {
    cout << "entering : SortUtil : getSortedTop6" << endl;

//    scoredMap
    map<double, string > reverseMap;
    for ( map<string,double>::iterator it=scoredMap.begin(); it!=scoredMap.end(); it++){
        cout <<it->first<< "' score<>is: " <<it->second << endl;
        reverseMap.insert(make_pair(it->second, it->first));
    }

    map<string,double > top6Map;
    int t = 0;
    for ( map<double,string>::iterator it=--reverseMap.end(); it!=reverseMap.begin(); it--){
        if(t<6){
//            cout <<it->first<< "' score<********>is: " <<it->second << endl;
            top6Map.insert(make_pair(it->second, it->first));
            t++;
        } else
            break;
    }

//    for ( map<string, double>::iterator it=top6Map.begin(); it!=top6Map.end(); it++) {
//        cout <<it->first<< "' score<>is: " <<it->second << endl;
//    }

//    typedef map<double,string>::const_iterator testIt;
//
//    reverseMap[8] = "BA";
//    reverseMap[21] = "NKE";
//    reverseMap[92] = "WFM";
//    reverseMap[95] = "WAL";
//    reverseMap[100] = "ABC";
//    cout<<"Print  testmaporder ascending: "<<endl;
//    for (testIt iter = reverseMap.begin(); iter != reverseMap.end(); iter++){
//        cout << iter->first<<"---"<< reverseMap[iter->first] << endl;
//    }
    return top6Map;

}