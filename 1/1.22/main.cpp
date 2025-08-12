#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item sum, sales;
    std::cout << "ISBN          数量 总价 单价" << std::endl;
    while (std::cin >> sales){
        std::cout << sales << std::endl;
        sum = sales + sum;
    }
    std::cout << "---------" << std::endl;
    std::cout << sum << std::endl;
    return 0;
}
