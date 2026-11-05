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
        if(n>k)
        {
            ll temp=(n+k-1)/k;
            ll k1=k*temp;
            cout<<(k1+n-1)/n<<endl;
        }
        else
            cout<<(k+n-1)/n<<endl;
     }
}
