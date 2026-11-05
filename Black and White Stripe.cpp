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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi p(n+1,0);
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='W')
                p[i+1]=1;
            p[i+1]+=p[i];
        }
        ll mn=LLONG_MAX;
        ll i=1,j=k;
        while(i+k<=n || j<=n)
        {
            ll l=p[j]-p[i-1];
            mn=min(mn,l);
            j++,i++;
        }
        cout<<mn<<endl;

    }
}
