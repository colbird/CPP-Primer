#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string str("hello, world!!!");

    std::cout << str << std::endl;
    // for (std::string &a : str)
    int i = 0;
    while (std::isprint(str[i])){
        str[i] = 'X';
        i++;
    }
    std::cout << str << std::endl;
    return 0;
}
