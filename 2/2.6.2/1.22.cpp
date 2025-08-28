#include <iostream>

struct Sales_data{
    std::string isbn;
    double money = 0.0;
    int number = 0;
};

int main(){
   Sales_data data1;
   Sales_data data2;
   double price = 0.0;
   std::cin >> data1.isbn >> data1.number >> price;
   data1.money = price * data1.number;
   std::string isbn = data1.isbn;

    
   while (std::cin >> data2.isbn >> data2.number >> price){
       data2.money = price * data2.number;
       if (data1.isbn == data2.isbn){
            data1.number += data2.number;
            data1.money += data2.money;
       }
       else{
            std::cout << data1.isbn << ' '
                << data1.number << ' '
                << data1.money << std::endl;
        }
    }
    std::cout << data1.isbn << ' '
        << data1.number << ' '
        << data1.money << std::endl;
}
