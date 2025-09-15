#include <iostream>
#include <string>


int main(){

    std::string s;
    // 一次读一行
    // while(getline(std::cin, s))
    //     std::cout << s << std::endl;

    // 一次读一个词

    while (std::cin >> s)
        std::cout << s << std::endl;

    return 0;
}
