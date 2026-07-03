#include <iostream>
#include "../../myLib.h"
using namespace std;

void printInvertedLettersPattern(int num)
{
    cout << endl;
    for (int i = num; i > 0; i--)
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
    printInvertedLettersPattern(number);
}