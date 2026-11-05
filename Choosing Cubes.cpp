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
        ll n,f,k;
        cin>>n>>f>>k;
        vi a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll temp=a[f-1],b=0,e=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>temp)
                b++;
            else if(a[i]==temp)
                e++;
        }
        if(b>=k)
            cout<<"NO"<<endl;
        else if((b+e)<=k)
            cout<<"YES"<<endl;
        else
            cout<<"MAYBE"<<endl;

}
}

