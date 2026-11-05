
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>
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
        vi a(7);
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int mx = *max_element(a.begin(), a.end());

        int result = 2 * mx - sum;

        cout << result << endl;
     }
}
