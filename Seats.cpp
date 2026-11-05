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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vi a;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
                a.push_back(i);
        }
        ll l=a.size();
        ll ans=l;
        if(a.size()==0)
        {
            ans+=((n-2)/3 + 1);
            if((n-2)%3==2)
                ans++;
        }
        else
        {
            for(ll i=1;i<l;i++)
            {
                ans+=(a[i]-a[i-1]-1)/3;
            }
            ans+=(a[0]/3);
            if(a[0]%3==2)
                ans++;
            ll a1=n-a[l-1]-1;
            ans+=(a1/3);
            if(a1%3==2)
                ans++;
        }
        cout<<ans<<endl;
    }

}
