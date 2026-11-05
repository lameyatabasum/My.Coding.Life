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
    ll l,w,n;
    cin>>l>>w>>n;
    if((l*w)%n!=0)
       cout<<"IMPOSSIBLE"<<endl;
    else
    {
        char cr ='A';
        /*for(ll i=0;i<9;i++)
            cout<<char(cr+i)<<endl;*/
        ll m=n;
        vector<char>a(l*w+1);
        ll f=0;
        ll l1=l/(__gcd(l,n));
        n=n/__gcd(l,n);
        ll w1=w/(__gcd(w,n));

        //cout<<l1<<endl<<w1<<endl;
        for(ll i=1;i<=(l*w);i+=w1)
        {
           if((i-1)%w==0 && i!=1)
                i+=((w*l1)-1);
            for(ll k=0;k<l1;k++)
            {
                for(ll j=i+(w*k);j<=(i+(w*k)+w1);j++)
                    a[j]=cr;
            }
            cr++;

        }
        for(ll i=1;i<=(l*w);i++)
        {
            if((i-1)%w==0 && i!=1)
                cout<<endl;

            cout<<a[i];

        }
        cout<<endl;

    }
}
