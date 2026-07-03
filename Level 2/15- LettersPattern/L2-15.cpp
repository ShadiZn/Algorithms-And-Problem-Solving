#include <iostream>
#include "../../myLib.h"
using namespace std;

void printInvertedPattern(int num)
{
    cout << endl;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << char(65 + i - 1);

        cout << endl;
    }
    cout << endl;
}

int main()
{
    int number = readPositiveNumber("Enter A Positive Number Please: ");
    printInvertedPattern(number);
}