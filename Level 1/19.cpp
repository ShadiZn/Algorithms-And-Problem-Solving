#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

void readDiameter(float &d)
{
    do
    {
        cout << "Enter Diameter: ";
        cin >> d;
        if (d <= 0)
        {
            cout << "Wrong Value!\n";
        }
    } while (d <= 0);
}

float calcCircleAreaByDiameter(float d)
{
    return (PI * pow(d, 2)) / 4;
}

void printCircleArea(float d)
{

    float area = calcCircleAreaByDiameter(d);
    cout << "The area is: " << area << endl;
}

int main()
{
    float d;
    readDiameter(d);

    printCircleArea(d);

    return 0;
}

/*
Write a program to calculate circle area through diameter, then print it on the screen.
The use should enter:
D
Example Inputs:
10
Outputs 
78.54
*/