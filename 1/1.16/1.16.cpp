#include <iostream>

int main(){
    int sum = 0;
    for (int num = 0; std::cin >> num; sum+=num)
        ;

    std::cout << sum << std::endl;

    return 0;
}
