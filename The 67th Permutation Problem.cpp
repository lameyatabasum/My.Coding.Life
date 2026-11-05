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
        ll m=n*3;
        for(ll i=1;i<=n;i++)
        {
            cout<<i<<" "<<m<<" "<<m-1<<" ";
            m-=2;
        }
        cout<<endl;
     }
}
