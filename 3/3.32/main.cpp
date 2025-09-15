#include <iostream>

int main(){
    int iarray[10];
    int iarray2[10];
    int temp = 0;
    for (auto &i : iarray)
        i = temp++;

    for (auto i : iarray)
        iarray2[i] = i;

    for (auto i : iarray2)
        std::cout << i << std::endl;
}
