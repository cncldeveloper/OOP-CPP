#include <iostream>

using namespace std;

class Result
{
public:
    string univeristy;
    string studentName;
    int studentRoll;
    double cgpa[4];

    Result(string student, int roll) {
        studentName = student;
        studentRoll = roll;

        cgpa[0] = 3.63; // for roll: 1
        cgpa[1] = 4.00; // for roll: 2
        cgpa[2] = 3.95; // for roll: 3
        cgpa[3] = 3.98; // for roll: 4

        univeristy = "NUBTK";
    }

    void result() {
        cout << "UNIVERSITY   : " << univeristy << endl;
        cout << "STUDENT NAME : " << studentName << endl;
        cout << "STUDENT ROLL : " << studentRoll << endl;
        cout << "STUDENT CGPA : " << cgpa[studentRoll - 1] << endl;
        cout << "\n";
    }
};

int main()
{
    Result s1("Rahim", 1);
    s1.result();

    Result s2("Karim", 2);
    s2.result();
}