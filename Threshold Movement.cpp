
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
        vi a(n);
        ll mx=LLONG_MIN,mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
                mn=min(mn,a[i]);
            else
                mx=max(mx,a[i]);
        }
        //cout<<mn<<" "<<mx<<endl;
        if(n%2!=0)
            cout<<"NO"<<endl;
        else
        {
            if(mn-mx>1LL)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
