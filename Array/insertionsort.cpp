#include<bits/stdc++.h>
using namespace std;
void selectionsort(int ar[],int n)
{
    for(auto i=1;i<n;i++)
    {
        int x=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>x)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=x;
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(auto i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    selectionsort(ar,n);
    for(auto j=0;j<n;j++)
    {
        cout<<ar[j]<<" ";
    }
}