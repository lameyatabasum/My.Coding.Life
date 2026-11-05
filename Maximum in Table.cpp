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
    ll n;
    cin>>n;
    //ll mx=0;
    vector<vector<int>>a(n+1, vector<int>(n+1, 1));
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
            //mx=max(mx,a[i][j]);
        }
    }
    cout<<a[n][n];
}

