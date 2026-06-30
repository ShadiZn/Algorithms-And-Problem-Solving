#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

void readCircumference(float &x)
{
    do
    {
        cout << "Enter circumference: ";
        cin >> x;

        if (x <= 0)
        {
            cout << "Wrong Value!\n";
        }
    } while (x <= 0);
}

float calcCircleAreaByCircumference(float l)
{
    return pow(l, 2) / (4 * PI);
}

void printCircleArea(float l)
{
    float area = calcCircleAreaByCircumference(l);
    cout << "The area is: " << area << endl;
}

int main()
{
    float l;
    readCircumference(l);
    printCircleArea(l);
    return 0;
}

/*
Write a program to calculate circle area along the circumference, then print it on the screen.
The use should enter:
L
Example Inputs:
20
Outputs 
31.831
*/