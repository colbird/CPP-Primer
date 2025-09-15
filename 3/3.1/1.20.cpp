#include <iostream>
using std::cin; using std::cout; using std::endl;

struct Sales_data{
    std::string isbn;
    double money = 0.0;
    int number = 0;
};

int main(){
   Sales_data data;
   double price = 0.0;
   cin >> data.isbn >> data.number >> price;
   data.money = price * data.number;
    
   cout << data.isbn << ' '
       << data.number << ' '
       << data.money << endl;
}
