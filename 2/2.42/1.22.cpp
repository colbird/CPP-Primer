#include <iostream>
#include "Sales_data.h"

int main(){
    Sales_data first, second;
    double price = 0.0;
    std::cin >> first.isbn >> first.number >> price;
    first.money = price * first.number;
    while (std::cin >> second.isbn >> second.number >> price){
        second.money = price * second.number;
        first.number += second.number;
        first.money += second.money;
    }
    std::cout << "isbn 销量 收入" << std::endl; 
    std::cout << first.isbn << ' '
        << first.number << ' '
        << first.money << std::endl;
    return 0;
}
