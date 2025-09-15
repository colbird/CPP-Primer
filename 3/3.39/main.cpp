#include <iostream>
#include <cstring>
#include <string>


int main(){
    std::string str1("hello, world!!!");
    std::string str2("HELLO, world!!!");
    
    std::cout << (str1 < str2) << std::endl;

    char cstr1[] = "hello, world!!!";
    char cstr2[] = "HELLO, world!!!";

    std::cout << std::strcmp(cstr1, cstr2) << std::endl;
}
