#include <iostream>
#include "../../myLib.h"
using namespace std;

// Added To My Library

/* int calcNumberOfDigits(int num)
{
    int res = 0;
    while (num > 0)
    {
        res++;
        num /= 10;
    }
    return res;
}*/

void printNumberDigitsInOrder(int number)
{
    int counter = calcNumberOfDigits(number);

    number = reverseNumber(abs(number));

    while (counter)
    {
        cout << number % 10 << endl;
        number /= 10;
        counter--;
    }
}

int main()
{
    int number = readNumber("\nEnter The Number: ");

    printNumberDigitsInOrder(number);
}

/*
    Another Solution is to convert the number into string then print it in order
*/