#include<bits/stdc++.h>
using namespace std;
// Using DP
int fibo(int n){
    if(n<=1){return n;}
    int ans[n+1];
    ans[0]=0;
    ans[1]=1;
    for(auto i=2;i<n+1;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
// Optimised Space
int fib(int n){
    int a=0,b=1,c,i;
    if(n==0){return a;}
    for(auto i=2;i<n+1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
// Using Formula in Constant time and Space
int fibbo(int n){
    double pi=(sqrt(5)+1)/2;
    return round(pow(pi,n)/sqrt(5));
}
int main()
{
    int m;
    cin>>m;
    cout<<fibo(m)<<" "<<fib(m)<<" "<<fibbo(m);

}