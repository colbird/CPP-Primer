#include <iostream>
#include <vector>

int main(){
    std::vector<int> ivec;
    int i;

    while(std::cin >> i)
        ivec.push_back(i);


    ;

    for (auto beg = ivec.begin(), end = ivec.end()-1;
        beg < end;
        ++beg, --end)
        std::cout << (*beg + *end) << std::endl;

    return 0;
}
