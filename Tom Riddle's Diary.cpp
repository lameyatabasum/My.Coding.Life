#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string, int>m;
    while(t--)
    {
        string s;
        cin>>s;
        if(m.find(s)!=m.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        m[s]++;
    }
}
