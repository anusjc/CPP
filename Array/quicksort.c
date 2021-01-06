#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
        printf("%d ",arr[i]);
    }
}
int partition(int ar[],int l,int h)
{
    int pivot=ar[h];
    int i=l-1;
    for(int j=l;j<h;j++)
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
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}