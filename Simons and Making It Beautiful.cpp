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
        ll mx;
        cin>>a[0];
        mx = a[0];
        ll idx =0;
        for(int i=1;i<n;i++)
           {
               cin>>a[i];
               if(a[i]>mx)
               {
                   idx=i;
                   mx=a[i];
               }
           }
        swap(a[0],a[idx]);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
     }
}
