#include <iostream>
#include <vector>

int main(){
    std::vector<int> ivec;
    int i;

    while(std::cin >> i)
        ivec.push_back(i);


    if (!ivec.empty())
        for (auto right = ivec.size()-1, left = 0ul; left < right; ++left, --right)
           std::cout << ivec[left] + ivec[right] << " ";
    std::cout << std::endl;

    return 0;
}
