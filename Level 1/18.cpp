#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1416;

void readRadius(float &x)
{
    do
    {
        cout << "Enter Radius: ";
        cin >> x;
        if (x <= 0)
        {
            cout << "Wrong Value!\n";
        }
    } while (x <= 0);
}

float calcCircleArea(float r)
{
    return PI * pow(r, 2);
}

void printCircleArea(float r)
{

    cout << "The Circle area is: " << calcCircleArea(r);
}

int main()
{

    float r;
    readRadius(r);
    printCircleArea(r);
    return 0;
}

/*
Write a program to calculate circle area then print it on the screen.
The use should enter:
r
Example Inputs:
5
Outputs 
78.54
*/
