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
    ll n,m,d;
    cin>>n>>m>>d;
    vi a(n);
    ll mx=LLONG_MIN,mn=LLONG_MAX;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
    if(mx-mn>d)
        cout<<"impossible"<<endl;
    else if(mx-mn==d)
        cout<<n<<endl;
    else
    {
        long long L = max(0LL, mx-d);
        long long R = min(mn, m-d);

        if(L <= R)
          cout <<n + 1 <<endl;
        else
           cout << "impossible"<<endl;
    }

}

