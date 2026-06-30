#include <iostream>
#include <string>
using namespace std;

float inputPositive(string inputMsg, string errMsg)
{
    float num;
    do
    {
        cout << inputMsg;
        cin >> num;
        if (num < 0)
            cout << errMsg;

    } while (num < 0);

    return num;
}

float enterTotalSales()
{
    float totalSales = inputPositive("Enter Total Sales: ", "Wrong Input!\n");

    return totalSales;
}

float calcPercentage(float sales)
{
    if (sales > 1000000)
        return 0.01;
    else if (sales > 500000)
        return 0.02;
    else if (sales > 100000)
        return 0.03;
    else if (sales > 50000)
        return 0.05;
    else
        return 0;
}

float calcCommission(float sales)
{
    return sales * calcPercentage(sales);
}

void printCommission(float sales)
{

    cout << "The Percentage is: " << calcPercentage(sales) << endl;
    cout << "The Commission is: " << calcCommission(sales) << endl;
}

int main()
{
    float totalSales = enterTotalSales();

    printCommission(totalSales);
}

/*
Write a program to ask the user to enter:
• TotalSales
The commission is calculated as one percentage * the total sales amount, all
you need is to decide which percentage
to use of the following:
• > 1000,000    Percentage is 1%
• > 500K to 1M  Percentage is 2%
• > 100K  – 500K Percentage is 3%
• > 50K to 100K  Percentage is 5%
• Otherwise  Percentage is 0%
Example Inputs:
110,000
Outputs
3,300
*/