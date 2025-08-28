#include <iostream>
#include "Sales_data.h"

int main(){
    std::cout << "isbn 销量 价格" << std::endl; 
    Sales_data data;
    double price = 0;
    std::cin >> data.isbn >> data.number >> price;
    data.money = data.number * price;

    std::cout << "isbn 销量 收入" << std::endl;

    std::cout << data.isbn << ' '
        << data.number << ' '
        << data.money << std::endl;

    return 0;
}
