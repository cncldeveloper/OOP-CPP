/*
 :::::::::::::::::::::::::::::::
    PROCEDURE CODING STYLE
 :::::::::::::::::::::::::::::::
*/

#include <iostream>

float addition(float x, float y) {
    return x + y;
}

float subtraction(float x, float y) {
    return x - y;
}

int main()
{

    std::cout << addition(10, 5) << std::endl;
    std::cout << subtraction(10, 5) << std::endl;

    return 0;
}
