#include <iostream>

using namespace std;

class University
{
public:
    University() {
        cout << "Dhaka University" << endl;
    }

    void semester() {
        cout << "SEME";
    }
};

int main()
{
    University dhaka;
    
    University khulna;

    return 0;
}
