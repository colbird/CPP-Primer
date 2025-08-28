#include <iostream>

int main(){
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = ci;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;     // d 是int型指针
    // e = 42;     // e 是const int型指针
    // g = 42;     // g 是ci的别名

    return 0;
}
