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
        vi a(n);
        ll flag=0;
        map<ll,ll>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(m[a[i]]>0)
                flag=1;
            m[a[i]]++;
        }
        if(flag==1)
            cout<<-1<<endl;
        else
        {
            sort(a.rbegin(),a.rend());
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

     }
}

