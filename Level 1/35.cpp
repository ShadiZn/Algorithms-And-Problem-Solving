#include <iostream>
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
struct stMoneyPieces
{
    int penny, nickel, dime, quarter, dollar;
};

void readMoney(stMoneyPieces &money)
{
    money.penny = inputPositive("Enter Penny: ", "Wrong Input!");
    money.nickel = inputPositive("Enter nickel: ", "Wrong Input!");
    money.dime = inputPositive("Enter dime: ", "Wrong Input!");
    money.quarter = inputPositive("Enter quarter: ", "Wrong Input!");
    money.dollar = inputPositive("Enter dollar: ", "Wrong Input!");
}

int calcTotalPennies(stMoneyPieces money)
{
    return money.penny + 5 * money.nickel + 10 * money.dime + 25 * money.quarter + 100 * money.dollar;
}

void printTotalPennies(stMoneyPieces money)
{

    cout << "Total Pennies: " << calcTotalPennies(money) << endl;
}

float calcTotalDollars(stMoneyPieces money)
{
    return (float)calcTotalPennies(money) / 100;
}

void printTotalDollars(stMoneyPieces money)
{

    cout << "Total Dollars: " << calcTotalDollars(money) << endl;
}

int main()
{
    stMoneyPieces money;

    readMoney(money);

    printTotalPennies(money);

    printTotalDollars(money);

    return 0;
}

/*
Write a program to ask the user to enter:
• Pennies, Nickels, Dimes, Quarters, Dollars
Then calculate the total pennies , total dollars and print them on screen
giving that:
• Penny = 1
• Nickel = 5
• Dime = 10
• Quarter = 25
• Dollar = 100
Example Inputs:
5,5,5,5,5
Outputs
705 Pennies
7.05 Dollars
*/