using namespace std;

class MarkCalculation
{
public:
    string getLetterGrade(int mark) {
        if (mark >= 80) {
            return "A+";
        }
        else if (mark >= 70) {
            return "A";
        }
        else if (mark >= 60) {
            return "A-";
        }
        else if (mark >= 50) {
            return "B";
        }
        else if (mark >= 40) {
            return "C";
        }
        else if (mark >= 33) {
            return "D";
        }
        else {
            return "F";
        }
    }

    string getGradePoint(int mark) {
        if (mark >= 80) {
            return "5.00";
        }
        else if (mark >= 70) {
            return "4.00";
        }
        else if (mark >= 60) {
            return "3.50";
        }
        else if (mark >= 50) {
            return "3.00";
        }
        else if (mark >= 40) {
            return "2.00";
        }
        else if (mark >= 33) {
            return "1.00";
        }
        else {
            return "0.00";
        }
    }

};
