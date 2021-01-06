#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int n,comp;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    comp=((n*n)-n)/2;
    int swapp=0;
    int min_index;
    for(int k=0;k<n-1;k++)
    {
        min_index=k;
        for(int j=k+1;j<n;j++)
        {
            if(ar[j] < ar[min_index])
                min_index=j;

            swap(&ar[min_index],&ar[k]);
            ++swapp;
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("%d",ar[j]);
    }
    printf("\n");
    printf("%d",comp);
    printf("\n");
    printf("%d",swapp);


}