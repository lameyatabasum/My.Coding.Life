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
        ll sum=0,sum1=0;
        ll c=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==1)
                c++;
            else
            {
                sum+=x;
                sum1+=((x/2)-1);
            }

        }
        sum+=min(sum1,c);
        if(c==n-1 && n>1)
           {
               if(c>sum1)
                  cout<<sum+1<<endl;
                else
                  cout<<sum<<endl;
           }
        else if(sum>2)
            cout<<sum<<endl;
        else
            cout<<0<<endl;
    }
}

