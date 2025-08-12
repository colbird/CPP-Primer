#include <iostream>
#include "Sales_item.h"

int main(){
    int cut = 0;
    Sales_item sales, previons;
    while (std::cin >> sales){
        if (sales.isbn() != previons.isbn()){
            if (cut)
                std::cout << previons.isbn() << '\t' << cut << std::endl;
            previons = sales;
            cut = 1;
        }
        else{
            cut++;
        }
    }
    std::cout << previons.isbn() << '\t' << cut << std::endl;

    return 0;
}
