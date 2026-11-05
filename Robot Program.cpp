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
        ll mx= max(x,y);
        ll mn= min(x,y);
        ll sum = mn*2;
        if((mx-mn)>0)
        {
            sum+=((mx-mn)*2 -1);
        }
        cout<<sum<<endl;
     }
}
