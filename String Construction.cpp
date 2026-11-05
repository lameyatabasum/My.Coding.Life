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
        if(n-k<2)
        {
            cout<<-1<<endl;
            continue;
        }
        string s="";
        string c="";
        ll l=(k+3LL)/2LL;
        ll l1=n-k-2;
        for(ll i=0;i<l;i++)
            s+='0';
        for(ll i=0;i<k+2LL-l;i++)
            s+='1';
        if((n-k-2)%2!=0)
        {
            for(ll i=0;i<l1;i++)
            {
                if(i%2==0)
                    c+='1';
                else
                    c+='0';
            }
        }
        else
        {
            for(ll i=0;i<l1;i++)
            {
                if(i%2==0)
                    c+='0';
                else
                    c+='1';
            }
        }
        cout<<c+s<<endl;
    }
}

