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
        ll c=0;
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        ll sum=0;
        for(auto x : m)
        {
            if(x.second==1)
                {
                    c++;
                    sum+=x.first;
                }
        }
        sort(a.rbegin(),a.rend());
        c++;
        for(ll i=0;i<n;i++)
        {
            if(c<0)
                break;
            if(m[a[i]]>1)
            {
                c--;
                sum+=a[i];
            }

        }
        cout<<sum<<endl;

    }
}
