#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string c=s;
        ll f=0;
        for(ll i=1;i<n-1;i++)
        {
             if(s[i-1]==s[i+1] && s[i]!=s[i+1])
             {
                 f=1;
                 break;
             }
        }
        c.erase(unique(c.begin(),c.end()),c.end());
        /*for(ll i=0;i<s.length();i++)
            cout<<s[i]<<" ";*/
        //cout<<s.length()<<endl;
        if(f==0)
        {
            ll f1=0;
            for(ll i=1;i<n-1;i++)
            {
                if(s[i]!=s[i-1]&&s[i]!=s[i+1])
                {
                    f1=1;
                    break;
                }
            }
            if(f1==1)
                cout<<c.length()-1<<endl;
            else
                cout<<c.length()<<endl;

        }
        else
            cout<<c.length()-2<<endl;

    }
}
