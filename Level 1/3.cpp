#include <iostream>
using namespace std;

enum enNumberType
{
    Odd = 1,
    Even
};

int readNumber()
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;
    return num;
}

enNumberType checkNumberType(int num)
{
    if (num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void printNumberType(enNumberType type)
{
    if (type == enNumberType::Even)
        cout << "The Number is Even!\n";
    else
        cout << "The Number is Odd!\n";
}

int main()
{
    int number = readNumber();

    enNumberType numberType = checkNumberType(number);

    printNumberType(numberType);

    return 0;
}

/*
Write a program to ask the user to enter a number, then
Print “ODD” if its odd, Or “Even” if its even.
*/