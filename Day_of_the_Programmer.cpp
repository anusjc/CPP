#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;

    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;

    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (n < 1918)
    {
        if (n % 4 == 0)
        {
            cout << "12.09." << n;
        }
        else
        {
            cout << "13.09." << n;
        }
    }
    else if (n == 1918)
    {
        cout << "26.13.1918";
    }
    else
    {
        if (checkYear(n))
        {
            cout << "12.09." << n;
        }
        else
        {
            cout << "13.09." << n;
        }
    }
}