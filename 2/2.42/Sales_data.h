#ifndef SALES_DAT_H
#define SALES_DAT_H

#include <string>

struct Sales_data{
    std::string isbn;
    unsigned int number = 0;
    double money = 0.0;
};

#endif
