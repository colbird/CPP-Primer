#include <iostream>
#include <string>

int main(){
    std::string str1;
    std::string str2;

    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    if (str1 == str2)
        std::cout << str1;
    else if(str1 > str2)
        std::cout << str1;
    else
        std::cout << str2;

    return 0;
}
