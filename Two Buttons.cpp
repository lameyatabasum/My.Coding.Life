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
    ll n,m;
    cin>>n>>m;
    ll c=0;
    while(m>n)
    {
        if(m%2==0)
            m/=2;
        else
            m++;
        c++;
    }
    cout<<n-m+c<<endl;
}

