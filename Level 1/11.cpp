#include <iostream>
using namespace std;

enum enStudentResult
{
    Pass,
    Fail
};

void inputMarks(float marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "Please input mark " << i + 1 << ": ";
            cin >> marks[i];
        } while (marks[i] < 0 || marks[i] > 100);
    }
}

float calcAvg(float marks[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    return sum / n;
}

void printAvg(float marks[], int n)
{
    cout << "The Average is: " << calcAvg(marks, n) << endl;
}

enStudentResult checkIfPass(float marks[], int n)
{
    float avg = calcAvg(marks, n);
    return (avg >= 50) ? enStudentResult::Pass : enStudentResult::Fail;
}

void printResult(float marks[], int n)
{
    if (checkIfPass(marks, n) == enStudentResult::Pass)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    int n = 3;
    float marks[3];
    inputMarks(marks, 3);
    printAvg(marks, n);
    printResult(marks, n);
}

/*
Write a program to ask the user to enter:
• Mark1, Mark2, Mark3
Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
Example Inputs:
90
80
70
Outputs
80
PASS
*/