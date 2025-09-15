#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;

void log(vector<int>);
void log(vector<string>);

int main(){

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    log(v1);
    log(v2);
    log(v3);
    log(v4);
    log(v5);
    log(v6);
    log(v7);
}

void log(vector<string> v){
    std::cout << v.size() << " ";
    for (auto s = v.begin(); s != v.end(); ++s)
        std::cout << *s << " ";
    std::cout << std::endl;
}
void log(vector<int> v){
    std::cout << v.size() << " ";
    for (auto s = v.begin(); s != v.end(); ++s)
        std::cout << *s << " ";
    std::cout << std::endl;
}
