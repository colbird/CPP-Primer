#include <iostream>

int main(){
    int array[10];
    for (auto beg = std::begin(array), end = std::end(array);
        beg != end; ++beg)
        *beg = 0;
    for (auto i : array)
        std::cout << i << std::endl;
}
