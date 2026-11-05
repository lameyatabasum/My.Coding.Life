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
        string s;
        cin>>s;
        int c2 = 0;
        int c13 = 0;
        for (char x : s)
        {
            if (x=='1' || x=='3')
            {
                c13++;
            }
        }

        int ans = c2 + c13;

        for (char x : s)
        {

            if(x == '2')
            {
                c2++;
            }
            if (x =='1' || x == '3')
            {
                c13--;
            }

            ans = max(ans,c2 + c13);
        }

        cout<<s.size()- ans<<endl;
    }


}
