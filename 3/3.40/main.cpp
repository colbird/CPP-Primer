#include <iostream>
#include <cstring>

int main(){
    char cstr1[] = "Hello, ";
    char cstr2[] = "world!!!";
    char cstr3[20];

    std::strcpy(cstr3, cstr1);
    std::strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
}
