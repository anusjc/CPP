#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    while(n>0)
    {
        int k=n%10;
        rev=rev*10+k;
        n=n/10;
    }
    cout<<rev;

}
int reverse(int A) {
    int rev=0;
    while(A>0) {
        rev=rev*10+A%10;
        A=A/10;
    }
return rev;
}

// int isPalindrome(int A) {
//    return A==reverse(A);
// }
// int isPalindrome(int A) {
//     string s=to_string(A);
//     for(int i=0;i<s.length();i++){
//         if(s[i]!=s[s.length()-1-i]){
//             return false;
//         }
//     }
//     return true;
// }
// bool isPalindrome(int A) {
//     if(A<0)
//         return false;
//     long int temp = 0, temp2 = A;
//     while(A!=0)
//     {
//         temp = temp*10 + A%10;
//         A/=10;
//     }

//     if(temp==temp2)
//         return true;
//     else
//         return false;
// }