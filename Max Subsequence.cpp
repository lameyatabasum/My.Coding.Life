#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    for(int i=1;i<s.length(); )
    {
        if(s[i-1]==s[i])
            s.erase(i,1);
        else
            i++;
    }
    return s.length();
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<check(s);
}
