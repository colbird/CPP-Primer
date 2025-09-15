#include <iostream>

using std::string; using std::cin; using std::cout; using std::endl;

struct Sales_data{
    string isbn;
    double money = 0.0;
    int number = 0;
};

int main(){
   Sales_data data1;
   Sales_data data2;
   double price = 0.0;
   cin >> data1.isbn >> data1.number >> price;
   data1.money = price * data1.number;
   string isbn = data1.isbn;

    
   while (cin >> data2.isbn >> data2.number >> price){
       data2.money = price * data2.number;
       if (data1.isbn == data2.isbn){
            data1.number += data2.number;
            data1.money += data2.money;
       }
       else{
            cout << data1.isbn << ' '
                << data1.number << ' '
                << data1.money << endl;
        }
    }
    cout << data1.isbn << ' '
        << data1.number << ' '
        << data1.money << endl;
}
