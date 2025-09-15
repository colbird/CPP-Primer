#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main(){
    std::vector<std::string> vi;
    std::string str;

    while(std::cin >> str){
        for (auto c : str)
            if (!std::isdigit(c))
                return -1;
        vi.push_back(str);
    }

    for (auto s : vi)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
