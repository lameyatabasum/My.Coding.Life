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
        ll ans=0;
        if(n==2)
        {
            ans=4;
        }
        else
        {
        ll m=(n+2LL)/3LL;
        ans=m*2;
        }
        cout<<min(ans,k)<<endl;
    }

}
