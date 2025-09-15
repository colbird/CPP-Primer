#include <iostream>
#include <string>

int main(){
    std::string str("hello, world!!!");

    std::cout << str << std::endl;
    for (auto &a : str)
        a = 'X';
    std::cout << str << std::endl;
    return 0;
}
