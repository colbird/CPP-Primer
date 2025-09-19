#include <iostream>
#include <vector>

int main(){

    std::vector<int> ivec (10, 0);
    std::vector<int>::size_type cnt = ivec.size();
    
    for (std::vector<int>::size_type ix = 0;
        ix != cnt; ix++, cnt--)
        ivec[ix] = cnt;

    for (auto i : ivec)
        std::cout << i << std::endl;

    return 0;
}

/*
 *  需要用到自增前的数用后置, 但这个程序没有这个需求
 *  现将原始数据储存起来, 在自增开销比前置大
 *  没有要使用原始数据的需求就使用前置
 */
