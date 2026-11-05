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
        string s;
        cin>>s;
        ll f=sqrt(n);
        ll flag=0;
        if(f*f!=n)
        {
            flag=1;
        }
        else
        {
            for(ll i=0;i<f;i++)
            {
                for(int j=0;j<f;j++)
                {
                    if(i==0 || j==0 || i==f-1 || j==f-1)
                    {
                        if(s[i*f+j]!='1')
                            flag=1;
                    }
                    else
                    {
                        if(s[i*f+j]!='0')
                            flag=1;
                    }

                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
     }
}

