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
        ll a,b,n;
        cin>>a>>b>>n;
        vi v(n);
        ll sum=b;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if((v[i]+1)>a)
              sum+=(a-1);
            else
                sum+=v[i];
        }
        cout<<sum<<endl;
     }
}

