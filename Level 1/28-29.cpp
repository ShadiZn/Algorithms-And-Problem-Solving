#include <iostream>
using namespace std;

enum enOddOrEven
{
    Odd = 1,
    Even
};

int enterPositiveNumber()
{
    int n = 0;
    do
    {
        cout << "\nEnter Positive Number: ";
        cin >> n;
    } while (n <= 0);
    return n;
}

int calcOddSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
        sum += i;
    return sum;
}

int calcEvenSum(int n)
{
    int s = 0;
    for (int i = 2; i <= n; i += 2)
        s += i;

    return s;
}

enOddOrEven checkOddOrEven(int num)
{
    return (num % 2 == 0) ? enOddOrEven::Even : enOddOrEven::Odd;
}

int calcEvenSumUsingEnum(int n)
{

    int sum = 0;

    for (int i = 1; i <= n; i++)
        if (checkOddOrEven(i) == enOddOrEven::Even)
            sum += i;

    return sum;
}

void printOddSumUntil(int n)
{
    int res = calcOddSum(n);
    cout << "The Sum Of Odd Numbers From 1 To " << n << " is: " << res << endl;
}

void printEvenSumUntil(int n)
{
    int res = calcEvenSumUsingEnum(n);
    cout << "The Sum Of Even Numbers From 1 To " << n << " is: " << res << endl;
}

int main()
{
    int n = enterPositiveNumber();

    printOddSumUntil(n);
    printEvenSumUntil(n);
}

/*
Write a program to Sum odd numbers from 1 to N.
Input
10
Outputs
25

Write a program to Sum even numbers from 1 to N.
Input
10
Outputs
30
*/