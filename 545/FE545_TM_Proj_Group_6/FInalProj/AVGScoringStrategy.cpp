
#include "AVGScoringStrategy.h"
#include "iostream"
#include <regex>
#include <sstream>
using namespace std;

//double  AVGScoringStrategy::StockScoringStrategy(vector<string> &vector) {
//map<string, double> &  AVGScoringStrategy::StockScoringStrategy(vector<string> &vector) {
map<string, double>   AVGScoringStrategy::StockScoringStrategy(vector<string> &vector) {
    cout<< "StockScoringStrategy is AVGScoringStrategy\n";

    stringstream strstream;
    map<string,double> scoredMap;

    for (int i =0; i < vector.size(); i ++) {
    //        cout<<vector[i]<<endl;
            char stockRawScore[50] ;
            strstream << vector[i];
            strstream >> stockRawScore;
            strstream.clear();
            cout << stockRawScore << endl;

            //    char eefffefe[50] ;
            //    strcpy(eefffefe, stockRawScore);
            //    cout << eefffefe<<" ----======" << endl;

            regex pattern("[[:digit:]]+",regex_constants::extended);
            //    printf("input strings:\n");
            //    string buf;

            //    char stt[] = "21,50,46,50,91,90,43,flws,29";

            //    string sttsss = stt;
            //    char wccd[50] ;
            //    strcpy(wccd, "sdsdsdsd");
            //    strcpy(wccd, vector[0]);
            //    string context = "21,50,46,50,91,90,43,flws,29";
            //    string stock1="pd" ;
            //    char stk[];

            const char *d = ",";
            char *split;
            split = strtok(stockRawScore,d);
            double total=0;
            int count=0;
            double score=0;
            string stockName;

            while(split){
                match_results<string::const_iterator> result;
                string s = split;
                bool valid = regex_match(s,result,pattern);
                //        cout << "valid:" << valid << endl;

                double temp ;
                if(!valid)
                    stockName = split;
                else{
                    //            printf("%s\n",split);
                    strstream << split;
                    strstream >> temp;
                    strstream.clear();
                    total +=  temp;
                    //            cout << "total=" << total << endl;
                    //            cout << "count=" << count << endl;
                    count++;
                }
                split=strtok(NULL,d);
                temp = 0;
            }
            score = total / count;
//            scoredMap[stockName] = score;
            scoredMap.insert(make_pair(stockName, score));
            cout << "total"<<total<<";count" <<  count<<  ";score"<<score<< endl;
            cout << "stockName=" << stockName << endl;
    }

//    //用于遍历
//    cout << "****" << endl;
//    for (size_t i =0; i < rawdataentry.size(); i ++) {
//        cout<<rawdataentry[i]<<endl;
//    }
//    cout << "****" << endl;
//
//    stringstream strstream;
//    strstream << rawdataentry[0];
//    char kfe[50] ;
//    strstream >> kfe;
//    strstream.clear();
////    cout << rawdataentry[0] << endl;
//
//    char eefffefe[50] ;
//    strcpy(eefffefe, kfe);
//    cout << eefffefe<<" ----======" << endl;

//    for ( map<string,double>::iterator it=scoredMap.begin(); it!=scoredMap.end(); it++) {
//        cout <<it->first<< "' score is: " <<it->second << endl;
//    }

//    cout << "leaving...AVG"  << endl;
    return scoredMap;
}

