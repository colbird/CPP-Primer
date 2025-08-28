#include <iostream>

struct Sales_data{
    std::string isbn;
    unsigned int number = 0;
    double money = 0.0;
};

int main(){
    int cut = 0;
    Sales_data sales, previons;
    double price = 0.0;
    while (std::cin >> sales.isbn >> sales.number >> price){
        sales.money = price * sales.number;
        if (sales.isbn != previons.isbn){
            if (cut)
                std::cout << previons.isbn << '\t' << cut << std::endl;
            previons = sales;
            cut = 1;
        }
        else{
            cut++;
        }
    }
    std::cout << previons.isbn << '\t' << cut << std::endl;

    return 0;
}
