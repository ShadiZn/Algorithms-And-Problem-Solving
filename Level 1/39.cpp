#include <iostream>
using namespace std;

struct stTransaction
{
    float totalBill;
    float cashPaid;
};

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

void readTransaction(stTransaction &trans)
{
    trans.totalBill = readPositiveNumber(" Enter Total Bill: ");
    trans.cashPaid = readPositiveNumber("Enter Cash Paid: ");
}

float calcReminder(const stTransaction &trans)
{
    return trans.cashPaid - trans.totalBill;
}

void printReminder(const stTransaction &trans)
{
    cout << "*********************\n";
    cout << "The reminder is: " << calcReminder(trans) << endl;
}

int main()
{

    stTransaction trans1;
    readTransaction(trans1);
    printReminder(trans1);

    return 0;
}

/*
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
Input
20
50
Outputs
30
*/