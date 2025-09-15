#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(){
    std::vector<std::string> vs;
    std::string str;

    while (std::cin >> str)
        vs.push_back(str);

    for (auto sbeg = vs.begin();
        sbeg < vs.end();++sbeg)
        for (auto cbeg = sbeg->begin();
            cbeg < sbeg->end();++cbeg)
            *cbeg = std::toupper(*cbeg);

    for (auto sbeg = vs.begin();
        sbeg < vs.end();++sbeg)
            std::cout << *sbeg << std::endl;

    return 0;
}
