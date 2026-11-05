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
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<-1<<endl;
        else
        {
            cout<<2<<" "<<4<<" ";
            for(ll i=0;i<n-2;i++)
            {
                cout<<6LL*(1LL<<i)<<" ";
            }
            cout<<endl;
        }
    }
}

