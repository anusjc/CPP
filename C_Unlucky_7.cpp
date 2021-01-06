#include <bits/stdc++.h>
using namespace std;
int octalToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 8^0
    int base = 1;

    int temp = num;
    while (temp)
    {

        // Extracting last digit
        int last_digit = temp % 10;
        temp = temp / 10;

        // Multiplying last digit with appropriate
        // base value and adding it to dec_value
        dec_value += last_digit * base;

        base = base * 8;
    }

    return dec_value;
}
int main()
{
    int a, c = 0;
    cin >> a;
    for (auto i = 1; i <= a; i++)
    {

        string s = to_string(i);
        string s1 = to_string(octalToDecimal(i));

        if (s.find('7') != string::npos or s1.find('7') != string::npos)
        {
            c += 1;
        }
    }
    cout << a - c;
}