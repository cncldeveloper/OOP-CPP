#include <iostream>

using namespace std;

class Student
{
public:
    int roll;
    string name;
};

int main()
{
    Student s1; // Create an object of class
    Student s2;

    // Access property and set values
    s1.name = "Rahim";
    s1.roll = 654;

    s2.name = "Jon";
    s2.roll = 655;

    // Print property values
    cout << s1.name << endl;
    cout << s1.roll << endl;

    cout << "\n";

    cout << s2.name << endl;
    cout << s2.roll << endl;

    return 0;
}
