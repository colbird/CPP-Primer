#include <iostream>
#include <vector>

int main(){
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto arrBeg1 = std::begin(arr1);
    auto arrBeg2 = std::begin(arr2);
    auto arrEnd1 = std::end(arr1);
    auto arrEnd2 = std::end(arr2);

    while (arrBeg1 != arrEnd1 || arrBeg2 != arrEnd2){
        if (*arrBeg1 != *arrBeg2)
            break;
        ++arrBeg1;
        ++arrBeg2;
    }
    if (arrBeg1 == arrEnd1 && arrBeg2 == arrEnd2)
        std::cout << "相等" << std::endl;

    std::vector<int> ivec1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> ivec2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    if (ivec1 == ivec2)
        std::cout << "相等" << std::endl;

}
