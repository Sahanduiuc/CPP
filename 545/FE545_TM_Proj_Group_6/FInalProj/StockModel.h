#ifndef FINALPROJ_STOCKMODEL_H
#define FINALPROJ_STOCKMODEL_H

#include <iostream>
using namespace std;
class StockModel {
    string stockNmae;
    double stockPrice;

public:
    StockModel() {}
//    StockModel(string stockNmae )
    StockModel(const string &stockNmae, double stockPrice);

    const string &getStockNmae() const;
    void setStockNmae(const string &stockNmae);

    double getStockPrice() const;
    void setStockPrice(double stockPrice);
};


#endif //FINALPROJ_STOCKMODEL_H
