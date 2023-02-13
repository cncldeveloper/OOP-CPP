#include <iostream>

#include "MarkCalculation.h"
#include "Student.h"

using namespace std;

int main()
{
    int total;
    Student student[100];

    cout << "Enter Total Student: ";
    cin >> total;

    for (int i = 0; i < total; i++) {

        cout << "SL           : " << (i + 1) << endl;

        cout << "ROLL         : ";

        cin >> student[i].roll;

        cout << "NAME         : ";
        cin >> student[i].name;

        cout << "MATH         : ";
        cin >> student[i].math;

        cout << "BANGLA       : ";
        cin >> student[i].bangla;

        cout << "ENGLISH      : ";
        cin >> student[i].english;

    }

    for (int i = 0; i < total; i++) {
         student[i].display();
    }

    return 0;
}