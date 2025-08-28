#include <iostream>
#include "Sales_data.h"

int main(){
    Sales_data total;
    double price = 0.0;
    if (std::cin >> total.isbn >> total.number >> price){
        total.money = price * total.number;
        Sales_data trans;
        while (std::cin >> trans.isbn >> trans.number >> price){
            trans.money = price * trans.number;
            if (total.isbn == trans.isbn){
                total.number += trans.number;
                total.money += trans.money;
            }
            else{
                std::cout << total.isbn << " "
                    << total.number << " "
                    << total.money << std::endl;
                total = trans;
            }
        }
    std::cout << total.isbn << " "
        << total.number << " "
        << total.money << std::endl;
    } else{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
