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
        if(n<k)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n==k)
        {
            cout<<0<<endl;
            continue;
        }
        ll c=0;
        ll f=0;

        while(n>k)
        {
            ll n1=n/2;
            ll n2=n-n1;
            if(n1==n2 || n1%2!=0)
                n=n1;
            else if(n2%2!=0)
                n=n2;
            c++;
            if(n1==k || n2==k)
            {
                cout<<c<<endl;
                f=1;
                break;
            }

        }
        if(f==0)
            cout<<-1<<endl;
    }
}

