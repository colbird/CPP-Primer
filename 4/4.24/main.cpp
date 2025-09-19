#include <iostream>


int main(){
    int grade = 80;
    std::string finalgrade;

    finalgrade = (grade > 60) ? ((grade >= 60 && grade >75) ?((grade > 90) ? "high pass" : "pass") : "low pass") : "fail";

    std::cout << finalgrade << std::endl;

    return 0;
}
