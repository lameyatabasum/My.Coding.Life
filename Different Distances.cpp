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
        vi a1(n+1),a2(n+1),a3(n+1),a4(n+1);
        for(ll i=1;i<=n;i++)
        {
            a1[i]=i;
            if(i+1>n)
                a2[1]=i;
            else
              a2[i+1]=i;

            if(i+2>n)
                a3[2]=i;
            else
              a3[i+2]=i;

            if(i+3>n)
              a4[3]=i;
            else
              a4[i+3]=i;
        }
        for(ll i=1;i<=n;i++)
            cout<<a1[i]<<" ";
        for(ll i=1;i<=n;i++)
            cout<<a2[i]<<" ";
        for(ll i=1;i<=n;i++)
            cout<<a3[i]<<" ";
        for(ll i=1;i<=n;i++)
            cout<<a4[i]<<" ";
        cout<<endl;
    }
}

