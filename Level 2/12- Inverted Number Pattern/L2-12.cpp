#include <iostream>
#include "../../myLib.h"
using namespace std;

void printInvertedPattern(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

int main()
{
    int number = readPositiveNumber("Enter A Positive Number Please: ");
    printInvertedPattern(number);
}