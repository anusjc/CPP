#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void selectionsort(int arr[],int n)
{
    int min_index;
    for(auto i=0;i<n-1;i++)
    {
        min_index=i;
        for(auto j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min_index])
            min_index=j;

            swap(&arr[min_index],&arr[i]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    // vector<int> b;
    for(auto i=0;i<n;i++)
    {
       cin>>a[i];
    }
    // for(auto i=0;i<n;i++)
    // {
    //     int m;
    //     cin>>m;
    //     b.push_back(m);
    // }
   // sort(b.begin(),b.end(),greater<int> ());
    selectionsort(a,n);
    for(auto j=0;j<n;j++)
    {

        cout<<a[j]<<" ";
    }

}