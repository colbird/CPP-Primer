#include <iostream>
#include <vector>

int main(){
    std::vector<int> vi;
    int i = 0;

    while(std::cin >> i)
        vi.push_back(i);

    for (auto i : vi)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
