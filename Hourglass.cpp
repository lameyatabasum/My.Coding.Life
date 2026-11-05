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
        ll s,k,m;
        cin>>s>>k>>m;
        if(s>=k)
        {
            if((m%(2*k))<k)
            {
                cout<<s-(m%k);
            }
            else
            {
                cout<<(k-(m%k));
            }
        }
        else
        {
                if(m%k > s)
                    cout<<0;
                else
                    cout<<(s-(m%k));

        }
        cout<<endl;
     }
}
