#include <iostream>
using namespace std;

struct stUser
{
    int PIN;
    float balance;
};

int readPin()
{
    int pin;
    do
    {
        cout << "Enter Your PIN: ";
        cin >> pin;
        if (pin < 0)
            cout << "Wrong PIN!\n";

    } while (pin < 0);
    return pin;
}

bool validatePin(const stUser &user, int pin)
{

    return pin == user.PIN;
}

void showBalance(const stUser &user)
{
    while (!validatePin(user, readPin()))
    {
        system("color 4F");
        std::cout << "Wrong PIN!\n";
    }

    system("color 2F");
    cout << "Your Balance Is " << user.balance << endl;
}

int main()
{
    stUser user1{1234, 7500};

    showBalance(user1);
}

/*
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Assume User Balance is 7500.
Input
1234
5151
Outputs
Your Balance is: 7500
Wrong PIN
*/