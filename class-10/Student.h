using namespace std;

class Student
{
public:
    int roll;
    string name;

    int math;
    int bangla;
    int english;

    void display() {

        MarkCalculation m;

        string result;
        string gpa;

        if (m.getLetterGrade(math) == "F" || m.getLetterGrade(bangla) == "F" || m.getLetterGrade(english) == "F") {
            result = "FAILED";
            gpa = "0.00";
        } else {
            int avg = (math + bangla + english) / 3;
            gpa = m.getGradePoint(avg);
            result = "PASS";
        }

        cout << "::::::::::::::::::::::::::::::::::" << endl;
        cout << "ROLL    : " << roll << endl;
        cout << "NAME    : " << name << endl << endl;
        cout << "MATH    : " << math << "," << m.getLetterGrade(math) << endl;
        cout << "BANGLA  : " << bangla << "," << m.getLetterGrade(bangla) << endl;
        cout << "ENGLISH : " << english << "," << m.getLetterGrade(english) << endl << endl;

        cout << "RESULT  :" << result << endl;
        cout << "GPA     :" << gpa << endl;
    }
};
