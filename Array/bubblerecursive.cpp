#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a+*b;
    *a=*a-*b;
}
void bubblerecursion(int ar[],int n)
{
    if (n == 1) 
        return; 
    for(auto i=0;i<n-1;i++)
        if(ar[i]>ar[i+1])
            swap(ar[i],ar[i+1]);
    bubblerecursion(ar,n-1);
    

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
    bubblerecursion(ar,n);
    for(auto i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
    
}