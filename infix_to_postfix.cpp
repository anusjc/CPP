#include<bits/stdc++.h>
using namespace std;
void postfix(char *a)
{
    stack <char> s;
    char output[50],t;
    for(int i=0;a[i]!='\0';i++)
    {
        char ch=a[i];
        switch(ch)
        {
            case '^':
            case '-':
            case '+':
            case '/':
            case '*':s.push(ch);
                    break;
            case ')':t=s.top();
                     s.pop();
                     cout<<t;
                     break;
        }
        if(isalpha(ch))
            cout<<ch;
    }
}
int main()
{
    char a[]="(((a+b)+(c/d))-e)";
    postfix(a);
    return 0;
}