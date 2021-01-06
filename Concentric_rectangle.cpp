#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pt;
    cin>>n;
    pt=n;
    for(auto i=1;i<(2*n);i++)
    {
        for(auto j=1;j<(2*n);j++)
        {
            cout<<max(abs(i-n),abs(j-n))+1;;
        }
        cout<<"\n";
    }
    
}