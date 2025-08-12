#include <iostream>

int main(){
    std::cout << "请输入两个值：" << std::endl;

    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;

    if (num1 > num2)
        for (; num1 >= num2; --num1)
            std::cout << num1 << std::endl;

    else if (num1 < num2)
        for (; num1 <= num2; ++num1)
            std::cout << num1 << std::endl;

    return 0;
}
