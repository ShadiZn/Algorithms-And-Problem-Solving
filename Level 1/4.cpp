#include <iostream>
using namespace std;

struct stDriverInfo
{
    short age;
    bool hasLicense;
};

void inputDriverInfo(stDriverInfo &driver)
{
    do
    {
        cout << "Input Your Age: ";
        cin >> driver.age;

        if (driver.age < 1 || driver.age > 120)
        {
            cout << "Wrong Input!\n";
        }

    } while (driver.age < 1 || driver.age > 120);

    cout << "Do You Have License? (0 or 1) ";
    cin >> driver.hasLicense;
}

bool checkIfHired(stDriverInfo driver)
{
    return (driver.age > 21 && driver.hasLicense);
}

void printIfHired(stDriverInfo driver)
{
    if (checkIfHired(driver))
        cout << "Hired! \n";
    else
        cout << "Rejected! \n";
}

int main()
{
    stDriverInfo driver1;
    inputDriverInfo(driver1);
    printIfHired(driver1);
}

/*
Write a program to ask the user to enter his/her:
• Age
• Driver license
Then Print “Hired” if his\her age is grater than 21 and s/he
has a driver license, otherwise Print “Rejected”
*/