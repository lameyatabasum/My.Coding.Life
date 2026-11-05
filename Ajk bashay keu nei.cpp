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
long long remainder(long long x)
{
    ll num=x;
    ll flag=0;
    map<ll,ll>m;
    while(x>0)
    {
        ll f=x%10LL;
        m[f]++;
        if(m[f]>2)
        {
            flag=1;
            break;
        }
        x/=10LL;
    }
    for(auto j : m)
    {
        if(j.second>2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0LL;
    else
        return num;
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
        vi a(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
           {
               cin>>a[i];
               ll g=remainder(a[i]);
               sum+=g;
           }
           cout<<sum<<endl;


    }

}
