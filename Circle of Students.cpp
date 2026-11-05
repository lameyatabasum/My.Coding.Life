#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])==1 || abs(a[i]-a[i+1])==(n-1))
                flag=0;
            else
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

     }
}
