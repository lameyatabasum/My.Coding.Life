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
        ll x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;
        //case 1
        ll total1=a*(abs(x)+abs(y));
        //case 2
        ll mx=max(x,y);
        ll mn=min(x,y);
        ll total2=abs(mn)*b + abs(mx-mn)*a;
        //case 3
        ll total3= abs(mx)*b + abs(mx-mn)*a;
        cout<<min(total1,min(total2,total3))<<endl;
     }
}
