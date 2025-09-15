#include <iostream>
#include <vector>


int main(){
    std::vector<int> ivec{10, 20, 30, 40 ,50, 60, 70, 80, 90, 100};
    
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        *it *= 2;

    for (auto i : ivec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
