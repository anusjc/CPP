#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    vector <int> A;
    int n;
    cin>>n;
     while (n % 2 == 0)  
    {  
       //cout << 2 << " ";
       A.push_back(2);  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            A.push_back(i); 
            n = n/i;  
        }  
    }  
    if (n > 2)  
        A.push_back(n);
    
       
 cout<<*max_element(A.begin(), A.end())<<endl;    
}
}