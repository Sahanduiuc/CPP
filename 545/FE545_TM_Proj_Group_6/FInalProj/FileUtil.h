#ifndef FINALPROJ_FILEUTIL_H
#define FINALPROJ_FILEUTIL_H
#include <iostream>
using namespace std;


/*
 *
crawl data from Nasdaq

contrarian	growth_slash_value1	growth_slash_value2	momentum_strategy	p_slash_e	price_slash_sales	scorecard	small_cap_growth	symbol	value
21	50	46	50	91	90	[91, 29, 50, 50, 43, 21, 46, 90]	43	flws	29
 * *
 */

class FileUtil {
    string  stk_assessment_fil;
    string  stk_price_fil;

public:
    FileUtil();
    FileUtil(string fileName);
    vector<string> readfromFile(string fileName);

//    void setFileName(string fileNmae);
};


#endif //FINALPROJ_FILEUTIL_H
