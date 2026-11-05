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
        string s;
        cin>>s;
        string ss=s;
        int n=s.length();
        ss.erase(unique(ss.begin(),ss.end()),ss.end());
        if(ss.find("101")==string::npos && ss.find("010")==string::npos)
            {
                cout<<0<<endl;
                continue;
            }
        ll b=0;ll e=n-1;
        for(ll i=1;i<n;i++)
        {
            if(s[i-1]!=s[i])
            {
                b=i;
                break;
            }
        }
        for(ll i=n-1;i>0;i--)
        {
            if(s[i]!=s[i-1])
            {
                e=i-1;
                break;
            }
        }
        ll c0=0,c1=0;
        for(ll i=b;i<=e;i++)
        {
            if(s[i]=='1')
                c1++;
            else
                c0++;
        }
            ll ans=0;
            if(s[0]=='0'&&s[n-1]=='0')
            {
                ll total0=(n-1-e)+b+c0;
                ans=min(total0,min(c1,min((c0+n-1-e),c0+b)));
            }
            else if(s[0]=='1'&&s[n-1]=='1')
            {
                ll total1=(n-1-e)+b+c1;
                ans=min(total1,min(c0,min((c1+n-1-e),c1+b)));
            }
            else
            {
                ans=min(c1,c0);
            }


        cout<<ans<<endl;



     }
}
