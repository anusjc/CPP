#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// We have used Convert_SenondPlace() to Round off the Value till 2nd Place
// Logic Behind is:
// we have a number 37.66666 -> 37.66666*100 -> 3766.6666 + 0.5 -> (int)37.67.1666 ->  3767/100 -> (Answer)37.67

float convert_secondPlace(float a)
{

    float converted_val = (int)(100 * a + 0.5);
    return (float)converted_val / 100;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        float v1, v2, v3, v;
        cin >> v1 >> v2 >> v3 >> v;
        float a = 100 / (v1 * v2 * v3 * v);
        // cout << convert_secondPlace(a) << "\n";
        float c = 9.58;
        if (convert_secondPlace(a) >= c)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
}