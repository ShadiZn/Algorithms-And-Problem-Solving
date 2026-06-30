#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1416;

void readSquareSide(float &x)
{
    do
    {
        cout << "Enter Square Side: ";
        cin >> x;
        if (x <= 0)
        {
            cout << "Wrong Value!\n";
        }
    } while (x <= 0);
}

float calcCircleAreaInscribedInSquare(float a)
{
    return (PI * pow(a, 2)) / 4;
}

void printCircleArea(float a)
{
    float area = calcCircleAreaInscribedInSquare(a);
    cout << "The area is : " << area << endl;
}

int main()
{
    float a;
    readSquareSide(a);
    printCircleArea(a);
    return 0;
}

/*
Problem:
Write a program to calculate Circle area inscribed in a square, then print it on the screen.
The use should enter:
A
Example Inputs:
10
Outputs 
78.54
*/