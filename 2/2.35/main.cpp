#include <iostream>

int main(){
    const int i = 42;
// i 是一个整型常量
    auto j = i; const auto &k = i; auto *p = &i;
// j 是一个整型
// k 是i的别名
// p 是一个const int型指针

    const auto j2 = i, &k2 = i;
// j2 是一个整型常量
// k2 是i的别名

    
    j = 100;
    std::cout << j << std::endl;
    std::cout << i << std::endl;
    std::cout << k << std::endl;
    std::cout << k2 << std::endl;
    std::cout << j2 << std::endl;
    std::cout << *p << std::endl;

}
