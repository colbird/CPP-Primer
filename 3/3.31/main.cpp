#include <iostream>

int main(){
    int iarray[10];
    int temp = 0;
    for (auto &i : iarray)
        i = temp++;

    for (auto j : iarray)
        std::cout << j << std::endl;

    
}
