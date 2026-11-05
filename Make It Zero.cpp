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
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum^=a[i];
        }
        if(sum==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else
            {
                cout<<4<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
}

