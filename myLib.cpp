#include <iostream>
using namespace std;
// Enums
enum enWhatToSome
{
    All,
    Odd,
    Even
};

// Reading Functions

void readArrayNumbers(float[], int);
int readNumberOfElements();
int readPositiveNumber(string);
float readNumberInRange(float, float, string);
float readNumber(string);

// Validation Functions

bool isEven(int);
bool isPrime(int);
bool validateNumInRange(float, float, float);

// Conversions and Calculations

int secondsToDays(int);
int secondsToHours(int);
int secondsToMinutes(int);
float hoursToDays(float);
float hoursToWeeks(float);
float daysToWeeks(float);
int sumNumbersInRange(int, int, enWhatToSome);

// Other Functions

void swap(float &, float &);

int main()
{
    cout << daysToWeeks(8);
}

// Reading Functions

void readArrayNumbers(float nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> nums[i];
    }
}
int readNumberOfElements()
{
    int n;
    do
    {
        cout << "Enter The Number Of Elements You Want: ";
        cin >> n;
    } while (n < 1);
    return n;
}
int readPositiveNumber(string msg)
{
    int x;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values Is Not Allowed!\n\n";

    } while (x <= 0);
    return x;
}
float readNumberInRange(float from, float to, string msg)
{
    int x;
    bool flag;
    do
    {
        cout << msg;
        cin >> x;

        flag = validateNumInRange(x, from, to);
        if (!flag)
            cout << "Not In Allowed Range!\n";

    } while (!flag);
    return x;
}
float readNumber(string msg)
{
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

// Validation Functions

bool isEven(int n)
{
    return (n % 2 == 0);
}
bool isPrime(int num)
{

    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}
bool validateNumInRange(float num, float from, float to)
{
    return (num >= from && num <= to);
}

// Conversions and Calculations

int secondsToDays(int seconds)
{
    return seconds / (60 * 60 * 24);
}
int secondsToHours(int seconds)
{
    return seconds / (60 * 60);
}
int secondsToMinutes(int seconds)
{
    return seconds / 60;
}
float hoursToDays(float hours)
{
    return hours / 24;
}
float hoursToWeeks(float hours)
{
    return hours / 24 / 7;
}
float daysToWeeks(float days)
{
    return days / 7;
}
int sumNumbersInRange(int from, int to, enWhatToSome condition)
{
    int sum = 0;

    // Sum Even Numbers (Or All)
    if (condition == enWhatToSome::Even || condition == enWhatToSome::All)
        for (int i = isEven(from) ? from : from + 1; i <= to; i += 2)
            sum += i;

    // Sum Odd Numbers (Or Even)
    if (condition == enWhatToSome::Odd || condition == enWhatToSome::All)
        for (int i = !isEven(from) ? from : from + 1; i <= to; i += 2)
            sum += i;

    return sum;
}

// Other Functions

void swap(float &x, float &y)
{
    float temp = x;
    x = y;
    y = temp;
}
