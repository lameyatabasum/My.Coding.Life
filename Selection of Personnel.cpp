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

long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;

    long long ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - r + i) / i;
    }
    return ans;
}
int main()
{
    fast
    ll n;
    cin>>n;
    cout<<nCr(n,7)+nCr(n,6)+nCr(n,5)<<endl;
}
