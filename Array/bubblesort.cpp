#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void bubblesort(int a[], int n)
{
     int sc=0;
    for(auto i=0;i<n-1;i++)
    {
        for(auto j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                sc++;
                
            }
        }
    }
    for(auto k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
        cout<<endl<<n-1<<endl;
        cout<<sc;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto i=0;i<n;i++)
    {
       cin>>a[i];
    }
    bubblesort(a,n);
}