#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1416;

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

void readPositiveValues(float *a, float *b)
{

    cout << "Enter a: ";
    readPositiveValue(*a);

    cout << "Enter b: ";
    readPositiveValue(*b);
}

float calcCircleAreaByITriangle(float a, float b)
{
    float area;
    area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}

void printCircleArea(float a, float b)
{
    cout << "The Area Is: " << calcCircleAreaByITriangle(a, b) << endl;
}

int main()
{
    float a, b;

    readPositiveValues(&a, &b);

    printCircleArea(a, b);

    return 0;
}

/*
Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen.
The use should enter:
a
b
Example Inputs:
20
10
Outputs 
47.124
*/