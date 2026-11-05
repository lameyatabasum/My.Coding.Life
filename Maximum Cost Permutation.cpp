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
        for(ll i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==0)
                    c++;
            }
        if(c==1)
        {
            ll idex=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]==0)
                {
                    idex=i;
                    //cout<<idex<<endl;
                    break;
                }
            }
            if(find(a.begin(),a.end(),idex+1)==a.end())
            {
                ll b=0;
                for(ll i=0;i<n;i++)
                {
                    if(a[i]==0)
                        continue;
                    if(a[i]!=i+1)
                    {
                        b=i;
                        break;
                    }
                }
                ll e=-1;
                for(ll i=n-1;i>=0;i--)
                {
                    if(a[i]==0)
                        continue;
                    if(a[i]!=i+1)
                    {
                        e=i;
                        break;
                    }
                }
                cout<<e-b+1<<endl;
                continue;

            }

        }

        ll b=0,e=-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=i+1)
            {
                b=i;
                break;
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]!=i+1)
            {
                e=i;
                break;
            }
        }
        cout<<e-b+1<<endl;

    }
}
