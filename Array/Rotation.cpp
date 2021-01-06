#include<bits/stdc++.h>
using namespace std;
void rvereseArray(vector<int> v, int st, int ed)
    {
       while (st < ed)
        {
            v[st] = v[st] + v[ed];
            v[ed] = v[st] - v[ed];
            v[st] = v[st] - v[ed];
            st++;
            ed--;
        }
    }
void rotate(vector<int>a,int d)
{
    for(auto l=0;l<d;l++)
    {
    int temp=a[0];
    for(auto j=0;j<a.size()-1;j++)
    {
        a[j]=a[j+1];
    }
    a[a.size()-1]=temp;
    }
    
}
void pprint(vector<int> v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v.at(i)<<"\n";
    }
}
int main()
{
    vector<int> a;
    int n,d;
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
    }
    cin>>d;
    rvereseArray(a,0,n);
    rotate(a,d);
    rvereseArray(a,0,n);
    pprint(a,n);
}