
#pragma once

#include <string>

enum enWhatToSome
{
    All,
    Odd,
    Even
};

// Reading Functions
void readArrayNumbers(float nums[], int n);
int readNumberOfElements();
int readPositiveNumber(std::string msg);
float readNumberInRange(float from, float to, std::string msg);
float readNumber(std::string msg);

// Validation Functions
bool isEven(int n);
bool isPrime(int num);
bool validateNumInRange(float num, float from, float to);
bool isPerfect(int n);

// Conversions
int secondsToDays(int seconds);
int secondsToHours(int seconds);
int secondsToMinutes(int seconds);
float hoursToDays(float hours);
float hoursToWeeks(float hours);
float daysToWeeks(float days);

// Calculations
int sumNumbersInRange(int from, int to, enWhatToSome condition);
int calcSumOfDivisors(int n);

// Other Functions
void swap(float &x, float &y);
