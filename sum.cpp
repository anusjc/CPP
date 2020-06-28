#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int k=0;k<t;k++)
    {
     int  sum=0;
    vector<int> g;
    int a=0,b=1,c,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        g.push_back(c);
    }
    for(int j=0;j<g.size();j++)
    {
        
        if(g[j]%2 == 0 && g[j]<n && g[j]>0)
        {sum+=g[j];}
    }cout<<sum<<"\n";
    }
}