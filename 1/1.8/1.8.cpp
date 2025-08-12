#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";    // 少个"
    std::cout << /* "*/" /* "/*" */;

    return 0;
}
