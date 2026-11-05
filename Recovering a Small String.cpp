#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s="";
        if(n<=28)
        {
            s+='a';
            s+='a';
            int f=n-3;
            s+=('a'+f);
            cout<<s<<endl;
        }
        else if(28<n && n<=53)
        {
            s+='a';
            int f=n-28;
            s+=('a'+f);
            s+='z';
            cout<<s<<endl;
        }
        else
        {
            int f=n-53;
            s+=('a'+f);
            s+='z';
            s+='z';
            cout<<s<<endl;
        }
    }
}
