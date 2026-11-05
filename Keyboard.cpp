#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    cin>>d;
    string s;
    cin>>s;
    if(d=='R')
    {
    for(int i=0;i<s.length();i++)
    {
        int n=a.find(s[i]);
        cout<<a[n-1];
    }
    }
    else
    {
         for(int i=0;i<s.length();i++)
    {
        int n=a.find(s[i]);
        cout<<a[n+1];
    }
    }

}
