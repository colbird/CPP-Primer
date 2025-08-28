#include <iostream>

int main(){
    int i = 100, *pi = &i;

    std::cout << i << std::endl;
    std::cout << *pi << std::endl;

    *pi += 10;
    std::cout << *pi << std::endl;

    return 0;
}
