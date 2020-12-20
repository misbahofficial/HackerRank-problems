//Basic Data Types
#include <iostream>

int main(){

    int number{123};
    float number2{1.234};
    double number3{1.345}; //Double has double capacity than float
    char letter{'A'};//character contains only one character at a time
    bool isTrue{true}; //boolean has only two values which are true and false

    std::cout << number << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << letter << std::endl;
    std::cout << isTrue << std::endl;

    return 0;
}