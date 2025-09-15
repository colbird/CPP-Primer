#include <iostream>
#include <string>

int main(){
    std::string s1;
    std::string temp;

    while (std::cin >> temp)
        s1 += temp;
    std::cout << s1 << std::endl;

    return 0;
}
