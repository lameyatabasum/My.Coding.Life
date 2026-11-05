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
        ll n,c;
        cin>>n>>c;
        vi a(n),b(n);
        ll sum_a=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum_a+=a[i];
        }
        ll sum_b=0;
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            sum_b+=b[i];
        }
        /*ll f1=0,f2=0;
        if(is_sorted(a.begin(),a.end()))
        {
            f1=1;
        }
        else if(is_sorted(a.rbegin(),a.rend()))
            f2=1;*/
        ll sum=0,f=0;
        for(ll i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            {
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                ll flag=0;
                for(ll i=0;i<n;i++)
                {
                    if(b[i]>a[i])
                      {
                          flag=1;
                          break;
                      }
                }
                if(flag==1)
                    cout<<-1<<endl;
                else
                {
                    cout<<sum_a-sum_b+c<<endl;
                }
            }
            else
            {
                cout<<sum_a-sum_b<<endl;
            }
    }

}

