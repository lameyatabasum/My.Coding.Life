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

        long long x,y;
        cin>>x>>y;
        if(abs(x)<abs(y))
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll sum;
        if(y<0)
        {
            sum=abs(y)*4;
        }
        else
            sum=y*2;
        if((x-sum)%3==0 && (x-sum)>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
