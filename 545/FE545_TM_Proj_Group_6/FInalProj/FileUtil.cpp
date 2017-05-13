#include <sstream>
#include <fstream>
#include <vector>
#include "FileUtil.h"
#include "SystemLog.h"
#include "FilePathConst.h"

vector<string> FileUtil::readfromFile(string fileName) {
// open a specified filename.
//    ifstream fileIn(this->stk_assessment_fil);
    ifstream fileIn(fileName);

    //define a string to temporarily save each line of the txt file
    string eachLine;

    //define a string array to restore each line from txt file
    vector<string> dataentry;

    // Check whether the txt file is opened or not.
    if (fileIn.is_open()){

        // Read each line in the file
        for (int i=0;getline(fileIn, eachLine); i++) {

//            print out the info to console .
//            cout << eachLine << endl;

//            save reading data to log file
            SystemLog::getInstance()->savetoFile(eachLine);

//            also save it to a string array
            dataentry.push_back(eachLine);
        }

        // close the file
        fileIn.close();
    }else{
//        remind user a waring
        cout << "Can not read the file, please try again. " << endl;
    }

//    use string stream to convert an address to a string array and return it.
    cout <<"Address is "<< &dataentry << endl;

//    stringstream strstream;
//    string returnAddr;
//    strstream << &dataentry;
//    strstream >> returnAddr;
//    strstream.clear();
//    return returnAddr;

    return dataentry;
}

FileUtil::FileUtil(string fileName){
    stk_assessment_fil= fileName;
}

FileUtil::FileUtil(){
//    stk_assessment_fil ="NasdaqDataTest.txt";
//    stk_price_fil ="YahooAPIstockpriceinfo.txt";
}

//void FileUtil::setFileName(string fileNmae) {
//
//}