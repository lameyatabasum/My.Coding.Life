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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>time;

    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        time.push_back({a,b});
    }
    sort(time.begin(),time.end(),cmp);
    ll e=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(time[i].first>=e)
        {
            c++;n
            e=time[i].second;
        }
    }
    cout<<c<<endl;
}
