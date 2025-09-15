#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string str("hello, world!!!");

    std::cout << str << std::endl;
    // for (std::string &a : str)
    for (int i = 0; std::isprint(str[i]); i++)
        str[i] = 'X';

    std::cout << str << std::endl;
    return 0;
}
