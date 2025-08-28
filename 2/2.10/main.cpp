#include <iostream>

std::string global_str;     // 空字符串
int global_int;             // 0
int main(){
    std::cout << global_str << std::endl;
    int local_int;          // 不被初始化 值未定义
    std::string local_str;  // 不被初始化 值未定义
    return 0;
}
