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
        int sum=(s[0]-'0'),c=0;
        sort(s.begin()+1,s.end());
        //cout<<s<<endl;
        for(ll i=1;i<s.length();i++)
        {
            if(sum+(s[i]-'0')>=10)
                break;
            sum+=(s[i]-'0');
            c++;
            //cout<<c<<endl;
        }
        int ans=s.length()-c-1;
        //cout<<ans<<endl;
        if(s[0]!='1')
        {
            int sum1=1,c1=0;
            for(ll i=1;i<s.length();i++)
            {
                if(sum1+(s[i]-'0')>=10)
                    break;
                c1++;
                //cout<<c1<<'*'<<endl;
                sum1+=(s[i]-'0');
            }
            int ans1=s.length()-c1;
            ans=min(ans,ans1);
        }
        cout<<ans<<endl;
    }
}

