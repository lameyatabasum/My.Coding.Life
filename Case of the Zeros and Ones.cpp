#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c1=0,c0=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            c1++;
        else
            c0++;
    }
    cout<<abs(c1-c0);
}
