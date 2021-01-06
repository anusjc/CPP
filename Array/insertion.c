#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
    int swap=0;
    for(int i=1;i<n;i++)
    {
        int x=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>x)
        {
            ar[j+1]=ar[j];
            ++swap;
            j--;
        }
        ar[j+1]=x;
    }
    for(int j=0;j<n;j++)
    {
        printf("%d",ar[j]);
    }
    printf("\n");
    printf("%d",comp);
    printf("\n");
    printf("%d",swap);

    
}