#include <iostream>
using namespace std;

struct userInfo
{
    int pin = 1234;
    int balance = 7500;
};

int readPIN()
{
    int pin;
    cout << "Enter PIN Number: ";
    cin >> pin;
    return pin;
}

bool validatePIN(const userInfo &user, int pin)
{

    return pin == user.pin;
}

void showBalance(const userInfo &user)
{
    cout << "Your Balance Is : " << user.balance;
    system("color 2F");
}

void blockUser(const userInfo &user)
{
    cout << "You Have Been Blocked!\n";
    system("color 4F");
}

bool login(const userInfo &user)
{

    for (int tryCount = 1; tryCount <= 3; tryCount++)
    {
        int pin = readPIN();
        if (!validatePIN(user, pin))
            cout << "Wrong PIN! you have " << 3 - tryCount << " more tries\n";
        else
            return true;
    }

    return false;
}

int main()
{
    userInfo user1;
    if (login(user1))
        showBalance(user1);
    else
        blockUser(user1);
    return 0;
}

/*
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance
to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
Assume User Balance is 7500.
Input
1234
5151
Outputs
Your Balance is: 7500
Wrong PIN
*/