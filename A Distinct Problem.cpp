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
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        vi b;
        for(auto x: m)
        {
            b.push_back(x.first);
        }
        ll len=b.size();
        ll l=0,r=len-1,c=0;
        while(l<=r)
        {
            if(b[r]-b[l]<(r-l+1))
            {
                break;
            }
            if(l!=r)
            {
                if(b[r]-b[l+1]<b[r-1]-b[l])
                   {
                       c+=m[b[l]];
                       l++;
                   }
                else
                    {
                        c+=m[b[r]];
                        r--;
                    }
            }
        }
        cout<<c<<endl;
    }
}
