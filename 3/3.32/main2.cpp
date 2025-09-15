#include <iostream>
#include <vector>

int main(){
    std::vector<int> iarray(10);
    int temp = 0;
    for (auto &i : iarray)
        i = temp++;

    std::vector<int> iarray2 = iarray;

    for (auto i : iarray2)
        std::cout << i << std::endl;
}
