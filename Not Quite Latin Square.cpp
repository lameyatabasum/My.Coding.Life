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
        string a,s,d;
        cin>>a>>s>>d;
        if(a.find('?')!=string::npos)
        {
            ll j=a.find('?');
            ll sum=0;
            for(ll i=0;i<3;i++)
            {
                if(j==i)
                    continue;
                sum+=(a[i]-0);
            }
            cout<<(char)(198-sum)<<endl;
        }
        if(s.find('?')!=string::npos)
        {
            ll j=s.find('?');
            ll sum=0;
            for(ll i=0;i<3;i++)
            {
                if(j==i)
                    continue;
                sum+=(s[i]-0);
            }
            cout<<(char)(198-sum)<<endl;
        }
        if(d.find('?')!=string::npos)
        {
            ll j=d.find('?');
            ll sum=0;
            for(ll i=0;i<3;i++)
            {
                if(j==i)
                    continue;
                sum+=(d[i]-0);
            }
            cout<<(char)(198-sum)<<endl;
        }


    }
}

