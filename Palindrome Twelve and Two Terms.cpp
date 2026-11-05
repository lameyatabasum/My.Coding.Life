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
        if(n==10)
            cout<<-1<<endl;
        else if(n%12==10)
            cout<<22<<" "<<n-22<<endl;
        else
            cout<<n%12<<" "<<n-n%12<<endl;
    }
}

