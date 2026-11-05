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
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        string s0="",s1="";
        vi p(n+1,0);
        for(ll i=2;i<=n;i++)
        {
           if(s[i-1]==s[i-2])
               p[i]=p[i-1]+1;
           else
            p[i]=p[i-1];
        }
          while(q--)
          {
              ll l,r,k;
              cin>>l>>r>>k;
              ll temp=p[r]-p[l];
              ll need=(temp+1)/2;
              if(need>k)
                cout<<"NO"<<endl;
              else
                cout<<"YES"<<endl;
          }
        }
}
