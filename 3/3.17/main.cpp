#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(){
    std::vector<std::string> vs;
    std::string str;

    while (std::cin >> str)
        vs.push_back(str);

    for (auto &s : vs){
        for (auto &c : s)
            c = std::toupper(c);
    }
    for (auto &s : vs){
        for (auto c : s)
            std::cout << c;
        std::cout << std::endl;
    }

    return 0;
}
