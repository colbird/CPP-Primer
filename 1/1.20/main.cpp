#include <iostream>
#include "Sales_item.h"

int main(){
    std::cout << "isbn                  销量  收入" << std::endl; 
    Sales_item yhsd;
    std::cin >> yhsd;
    std::cout << "isbn                  销量 总价 收入" << std::endl; 
    std::cout << yhsd << std::endl;
    return 0;
}
