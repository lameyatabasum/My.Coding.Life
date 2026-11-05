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

        string s;
        cin>>s;
        ll temp=0;
        ll n=s.length();
        if(n==1)
        {
            temp=s[0]-'0';

        }
        else
        {
            temp=(s[n-2]-'0')*10LL +s[n-1];
        }
        if(temp%4==0)
            cout<<4<<endl;
        else
            cout<<0<<endl;

}

