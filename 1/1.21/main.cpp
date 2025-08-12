#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item first, second;
    std::cin >> first;
    std::cin >> second;

    std::cout << "isbn                  销量 总价 单价" << std::endl; 
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << first + second << std::endl;
    return 0;
}
