#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a="meow";
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(char &c : s)
         c=tolower(c);
        s.erase(unique(s.begin(),s.end()),s.end());
        if(a==s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
