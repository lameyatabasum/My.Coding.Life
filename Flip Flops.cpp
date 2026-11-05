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
        ll n,c,k;
        cin>>n>>c>>k;
        vi a(n);
        for(ll i=0;i<n;i++)
            {
                cin>>a[i];
            }
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++)
        {
               if(c>=a[i])
                {
                    if(k>0)
                    {
                        ll temp=c-a[i];
                        c+=min(temp,k);
                        k-=min(temp,k);
                    }
                    c+=a[i];
                }
        }
        cout<<c<<endl;

    }
}

