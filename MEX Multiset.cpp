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
        string s="";
        ll mx=0,idx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                c++;
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(c==0)
            {
                for(ll i=0;i<n;i++)
                   s+='A';
            }
            else
            {
            ll f=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]!=0)
                   s+='C';
                else
                {
                if(f==0)
                {
                    s+='A';
                    f=1;
                }
                else
                    s+='B';
                }
            }
            }
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

    }
}
