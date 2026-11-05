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
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll f[4]={0};
        ll f1=0;
        ll b1=0;
        for(ll i=0;i<n;i++)
        {
            f[a[i]]++;
            if(f[1]>=f[2]+f[3])
            {
                f1=1;
                if(f[1]>f[2]+f[3])
                {
                while(a[i+1]==3)
                {
                    f[a[i+1]]++;
                    i++;
                    if(f[1]==f[2]+f[3])
                        break;

                }
                }
               b1=i+1;
               break;
            }

        }
        //cout<<f[1]<<" "<<f[2]<<" "<<f[3]<<endl;
        //cout<<b1<<endl;
        ll fm[4]={0};
        ll b2=0;
        ll f2=0;
        for(ll i=b1;i<n;i++)
        {
            fm[a[i]]++;
            if(fm[1]+fm[2]>=fm[3])
            {
                f2=1;
                b2=i+1;
                break;
            }
        }
        if(f1==1 && f2==1)
        {
            if(b2!=n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
