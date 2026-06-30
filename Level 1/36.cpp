#include <iostream>
using namespace std;

void readNumbers(float &num1, float &num2)
{
    cout << "\nnumber 1: ";
    cin >> num1;
    cout << "\nnumber 2: ";
    cin >> num2;
}

char readOperator()
{
    char op;
    bool validation;
    do
    {
        cout << "\noperator ('+' , '-' , '*' , '/'): ";
        cin >> op;

        validation = (op == '+' || op == '*' || op == '-' || op == '/');

        if (!validation)
            cout << "Wrong Operator!\n";

    } while (!validation);

    return op;
}

float calculate(float num1, float num2, char op)
{
    float res = 0;
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    default:
        cout << "Wrong Input! ";
        return;
    }

    return res;
}

void printResult(float res)
{
    cout << "\nThe res is: " << res << endl
         << endl;
}

void calculator()
{
    float num1, num2;
    readNumbers(num1, num2);

    char op = readOperator();

    if (num2 == 0 && op == '/')
    {
        cout << "\nCan't Divide By 0!\n"
             << endl;
        return;
    }
    else
        printResult(calculate(num1, num2, op));
}

int main()
{
    calculator();
}

/*
Write a program to ask the user to enter:
• Number1
• Number 2
• OperationType
Then perform the calculation according to the Operation Type as follows:
• “+” : add the two numbers.
• “-” : Subtract the two numbers.
• “*” : Multiply the two numbers.
• “/” : Divide the two numbers.
Example Inputs:
10
20
*
Outputs
200
 */