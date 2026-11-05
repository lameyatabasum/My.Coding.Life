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
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==100)
                f=1;
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
