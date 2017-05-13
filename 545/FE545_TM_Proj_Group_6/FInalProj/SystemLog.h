#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H
#include <iostream>
#include <fstream>
class SystemLog {
//This is a Singleton Class that is using to keep log file
protected:
    std::string fileName = "Systemlog.txt";

    // initiated a ofstream object to log info.
    std::ofstream fileOut;

protected:
    SystemLog(){
        //actively open the log each time when the class is created.
        openLog();
    }

private:
    static SystemLog* p_log;
public:
    static SystemLog* getInstance();

public:
    int openLog();
    int savetoFile(std::string &info);
    int savetoFile(int info);
    int closeLog();
};
#endif //SINGLETON_SINGLETON_H
