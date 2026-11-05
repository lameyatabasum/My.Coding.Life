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
        ll n,a,b;
        cin>>n>>a>>b;
        if(n<=3)
        {
            if(n*a<b)
                cout<<n*a<<endl;
            else
                cout<<b<<endl;
        }
        else
        {
            if(3*a<=b)
            {
                cout<<a*n<<endl;
            }
            else
            {
                ll sum=(n/3)*b;
                if((n%3)*a<=b)
                    sum+=(n%3)*a;
                else
                    sum+=b;
                cout<<sum<<endl;
            }
        }
    }
}

