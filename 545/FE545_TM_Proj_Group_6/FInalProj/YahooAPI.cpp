
#include "YahooAPI.h"
void YahooAPI::getQuote(map<string, double> &scoredMap){
    std::cout<< "connecting to yahoo finance..."<<endl;


    // below part is not working on linux
//        stringstream strStream;
//
//        string szWebSite = "http://ichart.yahoo.com/table.csv?s=GOOG";
//
//        downloadFile(szWebSite,strStream);
//
//        char   TradeDate[26]="";
//        double OpenPrice=0.0;
//        double HighPrice=0.0;
//        double LowPrice=0.0;
//        double TodayClose=0.0;
//        long   Volume=0;
//        double AdjClose=0.0;
//
//        char szSub[100];
//
//        strStream.ignore(1024,'\n'); // ignore first line
//
//        while( strStream.good() )
//        {
//            if (!strStream.getline(szSub, sizeof(szSub), ',' ))
//                break;
//
//            strcpy(TradeDate,szSub); //trade date
////            strcpy_s(TradeDate, sizeof(TradeDate),szSub); //trade date
//
//            strStream.getline(szSub, sizeof(szSub), ',' );
//            OpenPrice =  atof(szSub);					// open price
//
//            strStream.getline(szSub, sizeof(szSub), ',' );
//            HighPrice =  atof(szSub);					// high price
//
//            strStream.getline(szSub, sizeof(szSub), ',' );
//            LowPrice =  atof(szSub);					// Low price
//
//            strStream.getline(szSub, sizeof(szSub), ',' );
//            TodayClose =  atof(szSub);					// Today Close
//
//            strStream.getline(szSub, sizeof(szSub), ',' );
//            Volume =  atoi(szSub);						// Volume
//
//            strStream.getline(szSub, sizeof(szSub) );
//            AdjClose =  atof(szSub);					// Adjust Close
//
//            cout	<<	TradeDate	<< "\t"
//                    <<  OpenPrice	<< "\t"
//                    <<  HighPrice	<< "\t"
//                    <<  LowPrice	<< "\t"
//                    <<  TodayClose	<< "\t"
//                    <<  Volume		<< "\t"
//                    <<  AdjClose
//                    <<	endl;
//        };

};