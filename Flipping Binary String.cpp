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
        ll c1=0,c0=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
                c0++;
            else
                c1++;
        }
        if(c0%2!=0)
        {
            if(c0==n)
                cout<<0;
            else
            {
                cout<<c0<<endl;
                for(ll i=0;i<n;i++)
                    if(s[i]=='0')
                      cout<<i+1<<" ";
            }
        }
        else if(c1%2==0)
        {
            if(c1>0)
            {
                cout<<c1<<endl;
                  for(ll i=0;i<n;i++)
                    if(s[i]=='1')
                      cout<<i+1<<" ";
            }
            else
                cout<<0;
        }
        else
            cout<<-1;
        cout<<endl;
    }
}
