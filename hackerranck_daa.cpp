#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int>a;
        for(int i=1;i<s.length();i++)
        {
            a.push_back((abs((int)s[i-1]-(int)s[i])));
        }
        int v=0,f=0;
        reverse(s.begin(),s.end());
        for(int i=1;i<s.length();i++)
        {
            int d=abs((int)s[i-1]-(int)s[i]);
            if(a[v]!=d)
            {
                cout <<"Not Funny"<<"\n";
                f=1;
                break;
            }
            v++;
        }
        if(f==0)
        {
            cout <<"Funny"<<"\n";
        }
    }
}