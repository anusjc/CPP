#include<bits/stdc++.h>
using namespace std;
// void merge(int ar[],int l,int mid,int h )
// {
//     int i,j,k;
//     int br[h++];
//     i=l;j=mid+1;k=l;
//     while(i<=mid && j<=h)
//     {
//         if(ar[i]<ar[j])
//         {
//             br[k++]=ar[i++];
//         }
//         else
//         {
//             br[k++]=ar[j++];
//         }
        
//     }
//     for(;i<=mid;i++)
//         br[k++]=ar[i];
//     for(;j<=h;j++)
//         br[k++]=ar[j];    
//     for(i=l;i<=h;i++)
//         ar[i]=ar[i];
// }
// void mergesort(int ar[],int l,int r)
// {
//     if(l<r)
//     {
//         int m=l+(r-l)/2;
//         mergesort(ar,l,m);
//         mergesort(ar,m+1,r);
//         merge(ar,l,m,r);
//     }
// }
// // void printarray(int ar[],int n)
// // {
// //     for(auto i=0;i<n;i++)
// //     {
// //         cout<<ar[i]<<" ";
// //     }
// // }
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(auto i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     mergesort(ar,0,n-1);
//     // printarray(ar,n);
//     for(auto i=0;i<n;i++)
//     {
//         cout<<ar[i]<<" ";  
//     }
// }
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 

    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        
        int m = l + (r - l) / 2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
void printArray(int A[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
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
  
   
    printArray(ar,n); 
  
    mergeSort(ar, 0, n - 1); 
    printArray(ar,n); 
    return 0; 
}