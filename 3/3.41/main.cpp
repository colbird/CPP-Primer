#include <iostream>
#include <vector>

int main(){
    int iarr[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int> ivec((std::begin(iarr)),(std::end(iarr)));

    for (auto i : ivec)
        std::cout << i << " ";
    std::cout << std::endl;

    std::vector<int> ivec2(iarr + 5, iarr + 10);
    for (auto i : ivec2)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
