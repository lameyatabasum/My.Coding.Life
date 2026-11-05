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
        vi a(3);
        for(ll i=0;i<3;i++)
           cin>>a[i];
        sort(a.begin(),a.end());
        if(a[0]==a[1])
        {
            if(a[2]%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(a[1]==a[2])
        {
            if(a[0]%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(a[0]+a[1]==a[2])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}
