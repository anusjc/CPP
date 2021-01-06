#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int partition(int ar[],int l,int h)
{
    int pivot=ar[h];
    int i=l-1;
    for(auto j=l;j<h;j++)
    {
        if(ar[j]<pivot)
        {
            i++;
            swap(&ar[i],&ar[j]);
        }
    }
    swap(&ar[i+1],&ar[h]);
    return (i+1);
}
void quicksort(int ar[],int l,int h)
{
    if(l<h)
    {
        int pi=partition(ar,l,h);
        quicksort(ar,l,pi-1);
        quicksort(ar,pi+1,h);

    }

}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}