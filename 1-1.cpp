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
        string s;
        cin>>s;
        ll c=0;
        for(int i=0;i<n;i++)
            if(s[i]=='0')
             c++;

        ll mc1=0;
        for(int i=1;i<n-1;i++)
        {
            if(s[i-1]=='1'&& s[i]=='0'&& s[i+1]=='1')
                {
                    mc1++;
                    s[i]='1';
                }
        }

        ll mx=n-c+mc1;
        ll c0=0,c1=0,cc1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                c1++;
            else
            {
                cc1+=(c1-1)/2;
                c1=0;
                c0++;
            }
        }
        //cout<<c1<<endl;
        cc1+=(c1-1)/2;
        //cout<<cc1<<endl;
        ll mn=n-c0-cc1;
        cout<<mn<<" "<<mx<<endl;
    }
}

