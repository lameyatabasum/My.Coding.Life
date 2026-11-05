#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<(s.length()-1)*9 +s[0]-'0'<<endl;
    }
}
