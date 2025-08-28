// 76
#include <iostream>

struct Sales_data{
    std::string isbn;
    double money = 0.0;
    int number = 0;
};

int main(){
   Sales_data data;
   double price = 0.0;
   std::cin >> data.isbn >> data.number >> price;
   data.money = price * data.number;
    
   std::cout << data.isbn << ' '
       << data.number << ' '
       << data.money << std::endl;
}
