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
    user.months = inputPositive("Enter Number Of Months: ", "Wrong Value!\n");
}

void calcMonthlyAmount(stAccount &user)
{
    if (!user.months)
        user.monthlyPayment = 0;
    else
        user.monthlyPayment = ceil(user.loan / user.months);
}

void printMonthlyAmount(stAccount user)
{
    cout << user.monthlyPayment << " Per Month!\n";
}

int main()
{

    stAccount user1;
    readAccountInfo(user1);
    calcMonthlyAmount(user1);
    printMonthlyAmount(user1);

    return 0;
}

/*
Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then
calculate the monthly installment amount.
Input
5000
10
Outputs
500
*/