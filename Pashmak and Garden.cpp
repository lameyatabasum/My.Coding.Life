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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if((x1-x2)==0 || (y1-y2)==0 || abs(x1-x2)==abs(y1-y2))
    {
        if(x1-x2==0)
        {
            ll d=abs(y1-y2);
            cout<<x1+d<<" "<<y1<<" "<<x1+d<<" "<<y2;
        }
        else if(y1-y2==0)
        {
            ll d=abs(x1-x2);
            cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y1+d;
        }
        else
        {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
    }
    else
        cout<<-1;
}
