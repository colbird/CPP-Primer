#include <iostream>

int main(){
    
    std::cout << "请输入两个值：" << std::endl;
    int a1 = 0, a2 = 0;

    std::cin >> a1 >> a2;

    while (++a1 != a2)
        std::cout << a1 << std::endl;

    return 0;
}

