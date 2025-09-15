#include <iostream>
#include <string>
#include <vector>
#include <cctype>


int main(){
    std::vector<std::string> text{5, "hello, world!!!"};
    
    for (auto it = text.begin();
        it != text.end() && !it->empty(); ++it){
        for (auto c : *it)
            std::cout << char(std::toupper(c));
        std::cout << std::endl;
    }
    return 0;
}
