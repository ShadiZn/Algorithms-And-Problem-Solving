
#include <iostream>
using namespace std;

struct stDriverInfo
{
    short age;
    bool hasLicense;
    bool hasRecommendation;
};

stDriverInfo readDriverInfo()
{
    stDriverInfo driver;
    do
    {
        cout << "Enter Your Age: ";
        cin >> driver.age;
        if (driver.age < 1 || driver.age > 120)
            cout << "Invalid Age!\n";

    } while (driver.age < 1 || driver.age > 120);

    cout << "Do You Have Driver License (0 OR 1)? ";
    cin >> driver.hasLicense;

    cout << "Do You Have Driver Recommendation(0 OR 1)? ";
    cin >> driver.hasRecommendation;

    return driver;
}

bool checkIfHired(stDriverInfo driver)
{
    return (driver.hasRecommendation || (driver.age > 21 && driver.hasLicense));
}

void printIfHired(stDriverInfo driver)
{
    if (checkIfHired(driver))
        cout << "Hired!\n";
    else
        cout << "Rejected!\n";
}

int main()
{

    stDriverInfo driver1 = readDriverInfo();
    printIfHired(driver1);
}

/*
Write a program to ask the user to enter his/her:
• Age
• Driver license
• Has Recommendation!
Then Print “Hired” if his\her age is grater than 21 and s/he
has a driver license, otherwise Print “Rejected”
Or Hire him\her without conditions
*/