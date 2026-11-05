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
    ll n;
    cin>>n;
    vi a(n);
    vi p(100000+1,0);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]++;
    }
    ll sum=0;
    for(ll i=100000;i>0;i--)
    {
        if((p[i]*i)>=(p[i-1]*(i-1)))
        {
            sum+=(p[i]*i);
             p[i-1]=0;
        }
    }
    cout<<sum<<endl;

}
