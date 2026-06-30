#include <iostream>
#include <cmath>
using namespace std;

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

float calcRectAreaBySideAndDiagonal(float a, float d)
{
    float area = a * sqrt(pow(d, 2) - pow(a, 2));
    return area;
}

void printRectArea(float a, float d)
{

    cout << "The Area Is : " << calcRectAreaBySideAndDiagonal(a, d) << endl;
}

int main()
{
    float a, d;

    readPositiveValues(&a, &d);

    printRectArea(a, d);

    return 0;
}

/*
Write a program to calculate rectangle area through diagonal and side area of
rectangle and print it on the screen.
The use should enter:
a
d
Example Inputs:
5
40
Outputs
198.431
*/
