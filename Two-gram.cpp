#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>m;

    for(int i=0;i<n-1;i++)
    {
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        m[temp]++;

    }
    string ans="";
    int mx=0;
    for(auto x : m)
    {
        if(x.second>mx)
        {
          mx=x.second;
          ans=x.first;
        }
    }
    cout<<ans<<endl;
}
