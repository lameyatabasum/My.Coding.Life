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
        ll c=0,f1=0,v=0;
        while(n>0)
        {
            string s=n-'0';
            ll f=0;
            for(ll i=0;i<s.lenght()/2;i++)
            {
                if(s[i]!=s[length()-1-i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<n<<" "<<c<<endl;
                f1=1;
                break;
            }
            n-=c;
            v++;
            c=c*v;
        }
        if(f1==0)
            cout<<-1<<endl;
    }
}

