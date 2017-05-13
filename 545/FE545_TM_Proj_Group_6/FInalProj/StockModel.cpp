//
// Created by Mr.Late on 4/26/17.
//

#include "StockModel.h"

const string &StockModel::getStockNmae() const {
    return stockNmae;
}

void StockModel::setStockNmae(const string &stockNmae) {
    this->stockNmae = stockNmae;
}

double StockModel::getStockPrice() const {
    return stockPrice;
}

void StockModel::setStockPrice(double stockPrice) {
    this->stockPrice = stockPrice;
}

StockModel::StockModel(const string &stockNmae, double stockPrice) : stockNmae(stockNmae), stockPrice(stockPrice) {}
