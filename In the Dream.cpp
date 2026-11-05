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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        ll mx=max(a,b);
        ll mn=min(a,b);
        ll p1=(mx-1)/2;
        ll p2=(mn+1)/2;
        ll f=0;
        if(p2<p1 && mn<p1)
            f=1;
        ll mx1=max(c-a,d-b);
        ll mn1=min(c-a,d-b);
        ll p3=(mx1-1)/2;
        ll p4=(mn1+1)/2;
        if(p4<p3 && mn1<p3)
            f=1;
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
