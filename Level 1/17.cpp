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

void readPositiveValues(float *a, float *h)
{

    cout << "Enter a: ";
    readPositiveValue(*a);

    cout << "Enter h: ";
    readPositiveValue(*h);
}

float calcTriangleArea(float a, float h)
{
    return (a * h) / 2;
}

void printArea(float a, float h)
{
    cout << "The Area Is: " << calcTriangleArea(a, h) << endl;
}

int main()
{
    float a, h;

    readPositiveValues(&a, &h);

    printArea(a, h);

    return 0;
}