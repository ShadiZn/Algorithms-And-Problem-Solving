#include <iostream>
using namespace std;

int readPositiveNumber(string msg)
{
    int x;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values Is Not Allowed!\n\n";

    } while (x <= 0);
    return x;
}

float calcTotalBill(float bill)
{
    return bill * 1.1 * 1.16;
}

void printTotalValue(float billValue)
{
    cout << "The total bill is: " << calcTotalBill(billValue);
}

int main()
{

    float billValue = readPositiveNumber("Enter Bill Value: ");
    printTotalValue(billValue);

    return 0;
}

/*
A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
screen.
Input
100
Outputs
127.6
*/