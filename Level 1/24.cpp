#include <iostream>
using namespace std;

bool validateNumInRange(float num, float from, float to)
{
    return (num >= from && num <= to);
}

struct stUser
{
    short age;
};

void readAge(stUser &user)
{
    bool flag = false;

    do
    {
        cout << "Enter Your Age: ";
        cin >> user.age;

        flag = (user.age <= 0);

        if (flag)
        {
            cout << "Wrong Value!\n";
        }
    } while (flag);
}

void printIfAgeIsValid(stUser &user)
{
    if (validateNumInRange(user.age, 18, 45))
        cout << "Valid Age!\n";
    else
        cout << "Invalid Age!\n";
}

int main()
{
    stUser user1;

    readAge(user1);

    printIfAgeIsValid(user1);
}

/*
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print “Valid Age” otherwise print
“Invalid Age"
*/