#include <iostream>

int main(){

    int i = 0;
    while(std::cin >> i && i != 42)
        std::cout << i << std::endl;

    return 0;
}
