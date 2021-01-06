#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n,nr;
    cout<<"Enter the size of Array\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
    }
    cout<<"Enter the number of Rotations?";
    cin>>nr;
    rotation(a,nr,n);
    output(a);
    }
void rotation(vector<int> a,int nr,int n)
{
    for(auto b=0;b<nr;b++)
    {
        int temp=a.at(0);
    for(auto j=0;j<a.size()-1;j++)
    {
        a.at(j)=a.at(j+1);
        
    }
    a.at(n-1)=temp;
}
void output(vector<int> a)
{
    for(auto k=0;k<a.size();k++)
    {
        cout<<a.at(k)<<" ";
    }
}