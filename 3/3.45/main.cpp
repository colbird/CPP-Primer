#include <iostream>


int main(){
    constexpr int ROW = 3;
    constexpr int COL = 4;
    
    int iarr[ROW][COL] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    for (auto &row : iarr)
        for (auto col : row)
            std::cout << col << std::endl;

    for (auto row = std::begin(iarr); row != std::end(iarr); ++row)
        for (auto col = std::begin(*row); col != std::end(*row); ++col)
            std::cout << *col << std::endl;

    for (auto row = iarr; row != iarr + ROW; ++row)
        for (auto col = *row; col != *row + COL; ++col)
            std::cout << *col << std::endl;

}
