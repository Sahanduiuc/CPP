cmake_minimum_required(VERSION 3.6)
project(FInalProj)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp minmax.h
        SystemLog.cpp SystemLog.h
        StockModel.cpp StockModel.h
        PositionBookModel.cpp PositionBookModel.h
        ManagerAccount.cpp ManagerAccount.h
        ScoreModel.cpp ScoreModel.h
        SystemLogin.h
        FileUtil.cpp FileUtil.h
        ScoringStrategy.h
        AVGScoringStrategy.cpp AVGScoringStrategy.h
        WeightedAVGScoringStrategy.cpp WeightedAVGScoringStrategy.h
        NasdaqScoreModel.cpp NasdaqScoreModel.h SortUtil.cpp SortUtil.h
        GetQuote.cpp GetQuote.h
        InvestModel.cpp InvestModel.h
        FilePathConst.h
        InvestingStrategy.h
        AVGInvestingStrategy.cpp AVGInvestingStrategy.h
        GetQuoteFromYahooAdapter.h
        GetQuoteFromFile.h
        EmployeeIDSystemLogin.cpp EmployeeIDSystemLogin.h
        DBSystemLogin.cpp DBSystemLogin.h DBConnectionPool.cpp DBConnectionPool.h
        DBConnection.h
#        downloadFile.cpp
        downloadFile.h
        YahooAPI.cpp YahooAPI.h GetQuoteFromYahooAdapter.cpp GetQuoteFromFile.cpp)
add_executable(FInalProj ${SOURCE_FILES})