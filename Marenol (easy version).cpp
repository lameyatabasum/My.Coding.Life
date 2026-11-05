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
        string a;
        string b;
        cin>>a>>b;
        ll o_a=0,e_a=0,o_b=0,e_b=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0 && a[i]=='1')
              o_a++;
            else if(i%2!=0 && a[i]=='1')
                e_a++;
            if(i%2==0 && b[i]=='1')
                o_b++;
            else if(i%2!=0 && b[i]=='1')
                e_b++;

        }
        if(o_a==o_b && e_b==e_a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
