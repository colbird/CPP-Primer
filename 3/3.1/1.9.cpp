#include <iostream>

using std::cout;
using std::endl;

int main() {
    int i = 50;
    int cut = i;
    while (i++ <= 100){
        cut += i;   
    }
    cout << cut << endl;

    return 0;
}
