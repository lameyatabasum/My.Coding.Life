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
        vi a(n);
        ll c=0;
        ll f=0;
        ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                c++;
            if(a[i]%k==0)
                f=1;
            a[i]%=k;
            mn=min(mn,(k-a[i]));
        }
        if(f==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(k==4)
        {
            if(c>2)
                c=2;
            cout<<min(mn,2-c)<<endl;
            continue;
        }
        cout<<mn<<endl;
    }
}
