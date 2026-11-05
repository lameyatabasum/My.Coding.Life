#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
int main()
{
    fast
    ll t;
    cin>>t;
    string l="I love";
    string h="I hate";
    string tt=" that ";
    string it=" it";
    for(int i=1;i<=t;i++)
    {
        if(i%2!=0)
            cout<<h;
        else
            cout<<l;
        if(i!=t)
            cout<<tt;

    }
    cout<<it<<endl;
}
