#include <iostream>

int main(){

    int i = 50, sum = 0;
    while (i <= 100){
        sum += i++;
    }
    std::cout << "50到100 " << sum << std::endl;
    return 0;
}
