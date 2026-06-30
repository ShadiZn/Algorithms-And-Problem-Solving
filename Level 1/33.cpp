#include <iostream>
using namespace std;

struct stStudent
{
    float grade;
};

bool validateNumInRange(float x, float from, float to)
{
    return (x >= from && x <= to);
}

void readGrade(float &grade)
{

    do
    {
        cout << "Enter Your Grade: ";
        cin >> grade;

        if (!validateNumInRange(grade, 0, 100))
            cout << "Wrong Grade, Input it Again\n";

    } while (!validateNumInRange(grade, 0, 100));
}

void readStudentInfo(stStudent &student)
{
    readGrade(student.grade);
}

char checkStudentResult(stStudent student)
{

    if (student.grade >= 90)
        return 'A';
    else if (student.grade >= 80)
        return 'B';
    else if (student.grade >= 70)
        return 'C';
    else if (student.grade >= 60)
        return 'D';
    else if (student.grade >= 50)
        return 'E';
    else
        return 'F';
}

void printStudentResult(stStudent student)
{
    cout << "Your Result Is: " << checkStudentResult(student) << endl;
}

int main()
{
    stStudent student1;
    readStudentInfo(student1);
    printStudentResult(student1);
}