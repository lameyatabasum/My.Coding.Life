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
    ll n,k;
    cin>>n>>k;
    ll mx=LLONG_MIN;
    while(n--)
    {
        ll f,t;
        cin>>f>>t;
        if(t<=k)
            mx=max(mx,f);
        else
        {
            mx=max(mx,f-(t-k));
        }

    }
    cout<<mx<<endl;
}

