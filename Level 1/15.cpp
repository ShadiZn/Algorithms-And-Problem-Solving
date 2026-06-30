#include <iostream>
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

void readValues(float *a, float *b)
{

    cout << "Enter a: ";
    readPositiveValue(*a);

    cout << "Enter b: ";
    readPositiveValue(*b);
}

float calcRectArea(float a, float b)
{
    return a * b;
}

void printRectArea(float a, float b)
{

    float area = calcRectArea(a, b);
    cout << "The area is: " << area << endl;
}

int main()
{
    float a, b;
    readValues(&a, &b);
    printRectArea(a, b);
    return 0;
}

/*
Write a program to calculate rectangle area and print it on the screen.
Example Inputs:
10
20
Outputs
200
*/