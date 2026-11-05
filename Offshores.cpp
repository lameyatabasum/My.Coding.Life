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
        ll n,x,y;
        cin>>n>>x>>y;
        ll sum=0,mxs=0,mxb=0;
        for(int i=0;i<n;i++)
        {
            ll f;
            cin>>f;
            if(x>f)
            {
                mxs=max(mxs,f);
            }
            else
            {
                sum+=((f/x)*y);
                mxb=max(mxb,f-(f/x)*y);
            }
        }
        sum+=max(mxb,mxs);
        cout<<sum<<endl;
    }
}

