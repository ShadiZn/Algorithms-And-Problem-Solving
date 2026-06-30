#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

void readPositiveValue(float &x)
{
    do
    {
        cin >> x;
        if (x <= 0)
        {
            cout << "Wrong Value!\n";
            cout << "Enter it again: ";
        }
    } while (x <= 0);
}

void readTriangleData(float *a, float *b, float *c)
{

    cout << "Enter a: ";
    readPositiveValue(*a);

    cout << "Enter b: ";
    readPositiveValue(*b);

    cout << "Enter c: ";
    readPositiveValue(*c);
}

float calcCircleAreaByATriangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float helperValue = 4 * sqrt(p * (p - a) * (p - b) * (p - c));

    float area = PI * pow((a * b * c) / helperValue, 2);
    return area;
}

void printCircleArea(float a, float b, float c)
{

    cout << "Area is : " << calcCircleAreaByATriangle(a, b, c) << endl;
}

int main()
{
    float a, b, c;

    readTriangleData(&a, &b, &c);

    printCircleArea(a, b, c);

    return 0;
}
/*
Write a program to calculate  circle area circle described around an arbitrary triangle,
then print it on the screen.
The use should enter:
a
b
C
Example Inputs:
5
6
7
Outputs 
40.088

*/