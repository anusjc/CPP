#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
}  
int main() 
{ 
	int n;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    } 
    int i, j, min_idx,swapp=0; 
    int comp=(n*(n-1))/2; 
	for (i = 0; i < n-1; i++) 
	{  
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
            

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
        swapp++;
	} 
	for(int k=0;k<n;k++)
    {
        printf("%d",arr[k]);
        printf(" ");
    }
    printf("\n");
    printf("%d",comp);
    printf("\n");
    printf("%d",swapp); 
	return 0; 
} 

