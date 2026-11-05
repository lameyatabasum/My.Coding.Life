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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll>m;
        for(ll i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        ll c=0;
        for(auto x : m)
        {
            if(x.second%2!=0)
                c++;
        }
        if(k>=c)
        {
            ll l1=k-c;
            if(l1%2==0)
                cout<<"YES"<<endl;
            else
            {
                if((n-k)%2==0)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;

            }
        }
        else
        {
            ll l2=c-k;
            if(l2==1)
            {
                if((n-k)%2!=0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}
