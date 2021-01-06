// C++ program to find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int m, int n)
{

	 if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
}

// Driver program to test above function
int main()
{
	int a = 6, b = 9;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}
