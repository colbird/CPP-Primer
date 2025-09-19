#include <iostream>


int main(){
    int i = 4;
    double d = 6.5;

    i *= static_cast<int>(d);
    std::cout << i << std::endl;
    return 0;
}
