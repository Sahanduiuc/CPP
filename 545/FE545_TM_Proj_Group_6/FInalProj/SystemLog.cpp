#include <fstream>
#include "SystemLog.h"

SystemLog* SystemLog::p_log = NULL;
SystemLog* SystemLog::getInstance(){

    //lazy mode singleton
    if (p_log == NULL)
        p_log = new SystemLog();
    return p_log;
}

int SystemLog::openLog() {
    // open a new txt file.
    // if the file is non-existing, then create a new one.
    // if the file is existing, then append to it.
    fileOut.open(fileName.c_str(),std::ios::app);
    std::cout << "log is opening"<<std::endl;
    return 0;
}

int SystemLog::savetoFile(int info) {
    // save to log
    fileOut << info << "\n";
//    std::cout << info<<" is saving to log ...\n";
    return 1;
}

int SystemLog::savetoFile(std::string &info) {
    // save to log
    fileOut << info << "\n";
//    std::cout << info<<" is saving to log ...\n";
    return 1;
}

int SystemLog::closeLog() {
    // Close the log
    fileOut.close();
    std::cout << "log is closing"<<std::endl;
    return -1;
}
