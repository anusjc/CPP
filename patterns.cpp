#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=0;tc<t;tc++)
    {
    int n,k,cp=0,op=0;
     cin>>n>>k;
     vector<int> a;
    for(int i=0;i<n;i++)
    {
       int o;
       cin>>o;
       a.push_back(o);
    }
   op=accumulate(a.begin(), a.end(), 0);
   for(int j=0;j<a.size();j++)
   {
       if(a.at(j)>k)
       {
           cp+=k;
       }
       else if(a.at(j)<=k)
       {
           cp+=a.at(j);
       }
   }
   cout<<op-cp<<endl;
    }
}