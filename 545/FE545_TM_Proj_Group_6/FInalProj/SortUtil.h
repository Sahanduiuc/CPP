//
// 可以写成工厂模式
//

#ifndef FINALPROJ_SORTUTIL_H
#define FINALPROJ_SORTUTIL_H
#include <map>
#include <iostream>
using namespace std;
class SortUtil {
public:
    static const map<string, double> getSortedTop6(map<string, double> & scoredMap) ;
};


#endif //FINALPROJ_SORTUTIL_H
