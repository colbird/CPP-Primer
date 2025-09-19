#include <iostream>


int main(){
    int grade = 80;
    std::string finalgrade;
    
    finalgrade = (grade > 90) ? "high pass" : (grade >= 60 && grade <=75) ? "low pass" : (grade < 60) ? "fail" : "pass";

    std::cout << finalgrade << std::endl;

    return 0;
}
