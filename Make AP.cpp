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
        ll a,b,c;
        cin>>a>>b>>c;
        ll n_a = b-(c-b);
        if(n_a>=a && n_a%a==0 && n_a!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll n_b = a+(c-a)/2;
        if(n_b>=b && (c-a)%2 == 0 && n_b%b==0 && n_b!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll n_c = a+2*(b-a);
        if(n_c>=c && n_c%c==0 && n_c!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}

