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
        vi a(n),b(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll c=0;
for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(a[i] > a[j]) {
            swap(a[i], a[j]);
            c++;
        }
    }
}
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                f=1;
                break;
            }

        }
        if(f==1)
            cout<<-1<<endl;
        else
            cout<<c<<endl;
    }
}
