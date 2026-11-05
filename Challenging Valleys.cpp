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
        ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
            {
                cin>>a[i];
                //mn=min(mn,a[i]);
            }
        a.erase(unique(a.begin(),a.end()),a.end());
        ll idx=-1;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]<mn)
            {
                mn=a[i];
                idx=i;
            }
        }
        if(is_sorted(a.begin(),a.end()))
           cout<<"YES"<<endl;
        else
        {
            ll f=0;
            for(ll i=0;i<idx;i++)
            {
                if(a[i]<a[i+1])
                {
                    f=1;
                    break;
                }
            }
            for(ll i=idx;i<a.size()-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }

}
