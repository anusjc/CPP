#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    int sales;
    double comm=0;
    printf("Enter the Sale Amount");
    scanf("%d",sales);
    if(sales<500)
    {
        comm=0.05*sales;
    }
    else if(sales>500 && sales<=2000)
    {
        comm=0.10*sales;
    }
    else if(sales>2000 && sales<=5000)
    {
        comm=0.12*sales;
    }
    else
    {
        comm=0.125*sales;
    }
    printf("Commission is: %d",comm);
    
}