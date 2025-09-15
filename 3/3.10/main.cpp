#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string str("Hello, world!!!");

    for (auto c : str)
        if (std::ispunct(c))
            continue;
        else
            std::cout << c;
    std::cout << std::endl;
    return 0;
}
