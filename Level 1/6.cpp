#include <iostream>
using namespace std;

struct stFullName
{
    string firstName;
    string lastName;
};

stFullName enterFullName()
{
    stFullName fullName;
    cout << "Enter Your First Name Please: ";
    cin >> fullName.firstName;
    cout << "Enter Your Last Name Please: ";
    cin >> fullName.lastName;
    return fullName;
}

string getFullName(stFullName fullName, bool reversed)
{
    if (reversed)
        return fullName.lastName + ' ' + fullName.firstName;
    else
        return fullName.firstName + ' ' + fullName.lastName;
}

void printFullName(stFullName fullName)
{
    cout << "Your Full Name Is: " << getFullName(fullName, 0);
}

int main()
{
    printFullName(enterFullName());
}

/*
Write a program to ask the user to enter:
• First Name
• Last Name
Then Print Full Name on screen.
Example Input:
Mohammed
Abu Hadhoud
Output
Mohammed Abu-Hadhoud
*/