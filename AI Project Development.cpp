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
        ll n,x,y,z;
        cin>>n>>x>>y>>z;
        ll ans1=(n+x+y-1)/(x+y);
        ll d=x+y*10;
        ll ans2=z+(n- z*x + d - 1)/d;
        cout<<min(ans1, ans2)<<endl;
    }
}

