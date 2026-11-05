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
        if(2*k>n)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            ll cL=0;
            for(ll i=0;i<k;i++)
            {
                if(s[i]=='L')
                    cL++;

            }
            ll cR=0,i=n-1;
            while(k--)
            {
                if(s[i]=='R')
                    cR++;
                i--;
            }
            cout<<cL+cR<<endl;
        }
    }
}
