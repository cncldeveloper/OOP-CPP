/*
 :::::::::::::::::::::::::::::::
    OOP CODING STYLE
 :::::::::::::::::::::::::::::::
*/

#include <iostream>

using namespace std;

class Math
{
public:
    float addition(float x, float y) {
        return x + y;
    }

    float subtraction(float x, float y) {
        return x - y;
    }
};

int main()
{
    Math obj;

    std::cout << obj.addition(10, 5) << std::endl;
    std::cout << obj.subtraction(10, 5) << std::endl;

    return 0;
}