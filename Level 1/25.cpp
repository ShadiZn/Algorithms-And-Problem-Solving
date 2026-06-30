#include <iostream>
using namespace std;

struct stUser
{
    short age;
};

void printValid()
{
    cout << "Valid Age!\n";
}

bool validateUserAge(stUser &user, int from, int to)
{
    if (user.age >= from && user.age <= to)
        return true;
    else
        return false;
}

float readAge()
{
    float age;
    cout << "Enter Your Age: ";
    cin >> age;
    return age;
}

void readAgeUntilValid(stUser &user, int from, int to)
{
    do
    {

        user.age = readAge();

        if (!validateUserAge(user, from, to))
            cout << "Invalid Age! \n";
        else
            break;

    } while (1);

    printValid();
}

int main()
{
    stUser user1;

    readAgeUntilValid(user1, 18, 45);
}

/*
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print “Valid Age” otherwise print
“Invalid Age” and re-ask user to enter a valid age.
Note: You should keep asking user to enter a valid age until
s/she enters it.
*/