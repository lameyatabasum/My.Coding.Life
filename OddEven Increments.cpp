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
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll o=a[0]%2;
        ll e=a[1]%2;
        ll flag=0;
        for(int i=2;i<n;i++)
        {
            if(i%2==0)
            {
                if(o!=a[i]%2)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(e!=a[i]%2)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
     }
}

