#include <bits/stdc++.h> 
 using namespace std; 
int32_t main() 
{ 
    int n, i, f= 1; 
  
    cin >> n;
    for (i = 2; i <= sqrt(n); i++) 
    { 
        if (n % i == 0)
        { 
            f = 0; 
            break; 
        } 
    } 
    if (f== 1) 
        cout << "Prime"<<"\n";
    else 
        cout <<"Not Prime"<<"\n"; 
    
}