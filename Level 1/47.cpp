#include <iostream>
#include <cmath>
using namespace std;

float inputPositive(string inputMsg, string errMsg)
{
    float num;
    do
    {
        cout << inputMsg;
        cin >> num;
        if (num < 0)
            cout << errMsg << endl;

    } while (num < 0);

    return num;
}
struct stAccount
{
    float loan;
    int months;
    float monthlyPayment;
};

void readAccountInfo(stAccount &user)
{
    user.loan = inputPositive("Enter Loan Amount: ", "Wrong Value!\n");
    user.monthlyPayment = inputPositive("Enter Monthly Payment: ", "Wrong Value!\n");
}

void calcNumOfMonthsNeeded(stAccount &user)
{
    if (!user.monthlyPayment)
        user.months = 0;
    else
        user.months = ceil(user.loan / user.monthlyPayment);
}

void printNumOfMonthsNeeded(stAccount user)
{
    cout << user.months << " Months Is Needed!\n";
}

int main()
{

    stAccount user1;
    readAccountInfo(user1);
    calcNumOfMonthsNeeded(user1);
    printNumOfMonthsNeeded(user1);

    return 0;
}

/*
Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to
settle the loan.
Input
5000
500
Outputs
10 Months
*/