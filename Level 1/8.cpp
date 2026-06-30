#include <iostream>
using namespace std;

enum enMarkStatus
{
    Fail,
    Pass
};

float readMark()
{
    float mark;
    do
    {
        cout << "Please input your mark [0, 100]: ";
        cin >> mark;
    } while (mark < 0 || mark > 100);
    return mark;
}

enMarkStatus checkMarkStatus(float mark)
{
    return (mark >= 50) ? enMarkStatus::Pass : enMarkStatus::Fail;
}

void printMarkStatus(float mark)
{
    if (checkMarkStatus(mark) == enMarkStatus::Pass)
        cout << "You Passed! \n";
    else
        cout << "You Failed! \n";
}

int main()
{
    float mark = readMark();
    printMarkStatus(mark);
}