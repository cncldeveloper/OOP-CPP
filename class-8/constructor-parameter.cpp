#include <iostream>

using namespace std;

class University
{
public:
    University(string name) {
        cout << name << endl;
    }
};

int main()
{
    University uv("Dhaka University");
    University ku("Khulna University");

    return 0;
}
