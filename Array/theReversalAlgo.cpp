#include<bits/stdc++.h>
using namespace std;
void rvereseArray(int v[],int st,int ed)
{
   while (st<ed)
   {
       v[st]=v[st]+v[ed];
       v[ed]=v[st]-v[ed];
       v[st]=v[st]-v[ed];
       st++;
       ed--;
   }   
}
void roatae(int v[],int d,int n)
{
    if(d==0)
        return;
    rvereseArray(v,0,d-1);
    rvereseArray(v,d,n-1);
    rvereseArray(v,0,n-1);    
}
void pprint(int v[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int s,d;
    cin>>s;
    cin>>d;
    int ar[s];
    for(auto i=0;i<s;i++)
    {
        cin>>ar[i];
    }
    roatae(ar,d,s);
    pprint(ar,s);
}
