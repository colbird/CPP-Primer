#include <iostream>

int main(){
    typedef int int_array[4];

    constexpr int ROW = 3;
    constexpr int COL = 4;
    int ia[ROW][COL] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    for (int (&row)[4] : ia)
        for (int col : row)
            std::cout << col <<std::endl;

    std::cout << std::endl;
    for (int row = 0; row != ROW; ++row)
        for(int col = 0; col != COL; ++col)
            std::cout << ia[row][col] << std::endl;

    for (int (*row)[4] = ia; row != ia + ROW; ++row)
        for (int *col = *row; col != *row + COL; ++col)
            std::cout << *col << std::endl;
}
