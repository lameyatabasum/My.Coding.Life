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
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    m[0]=0,m[n+1]=n+1;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[x]=i;
    }
    ll c=1;
    for(int i=2;i<=n;i++)
    {
        if(m[i]<m[i-1])
        {
            c++;
        }
    }
    while(k--)
    {
        ll a,b;
        cin>>a>>b;
        ll a1=m[a-1];
        ll b1=m[b-1];
        swap(a,b);
        //ll c1=c-2;
        if(b==a+1)
        {
           if(a1>m[a])
             c++;
           if(b1>m[b])
              c++;
            else
                c--;
        }
        else
        {
        if(m[a]<a1)
            c++;
        if(m[b]<b1)
            c++;
        }
        cout<<c<<endl;
    }

}


