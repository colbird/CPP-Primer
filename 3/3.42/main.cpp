#include <iostream>
#include <vector>

int main(){
    std::vector<int> ivec(10, 1);
    int iarr[10];

    int i = 0;
    for (auto vi : ivec)
        iarr[i++] = vi;

    for (auto ia : iarr)
        std::cout << ia << " ";
    std::cout << std::endl;
    
    return 0;
}
