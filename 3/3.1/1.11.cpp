#include <iostream>

using std::cin; using std::cout; using std::endl;


int main(){
    int number1 = 0, number2 = 0, number3 = 0;

    cin >> number1 >> number2;
    number3 = number1 - number2;

    if (number3 > 0){
        while (number1 >= number2){
            cout << number1 << endl;
            --number1;
        }
    }
    else if (number3 < 0){
        while (number1 <= number2){
            cout << number1 << endl;
            ++number1;
        }
    }
    else
        cout << number1 << endl;
    return 0;
}
