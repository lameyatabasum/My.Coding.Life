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
        ll n,a,b,k;
        cin>>n>>a>>b>>k;
        if(n==2 ||n==3)
        {
            cout<<1<<endl;
            continue;
        }
        ll mx=max(a,b);
        ll mn=min(a,b);
        ll d1=(n-mx)+mn;
        ll d2=mx-mn;
        cout<<min(d2,d1)+k<<endl;
    }
}

