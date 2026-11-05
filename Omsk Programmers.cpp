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

    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x;

        cin>>a>>b>>x;
        ll ans=abs(a-b);
        ll c=0;
        while(1)
        {
            if(a==b)
                break;
            ans=min(ans,abs(a-b)+c);
            if(b>a)
                swap(a,b);
            a/=x;
            c++;
        }
        ans=min(ans,c);
        cout<<ans<<endl;

    }
}
