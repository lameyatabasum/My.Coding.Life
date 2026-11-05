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
        ll n;
        cin>>n;
        ll m=n;
        ll f=0;
        while(m>0)
        {
            if(m%10!=0 && m%10!=1)
            {
                f=1;
                break;
            }
            m/=10;
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(n%10==0&&n>1)
            n/=10;
        while(n%11==0&&n>1)
         {
            n/=11;
            //cout<<n<<endl;
         }
        while(n%101==0&&n>1)
            n/=101;
        while(n%111==0&&n>1)
            n/=111;
        while(n%1001==0&&n>1)
            n/=1001;
        while(n%1011==0&&n>1)
            n/=1011;
        while(n%1101==0&&n>1)
            n/=1101;
        while(n%1111==0&&n>1)
            n/=1111;

        //cout<<n<<'*'<<endl;

        if(n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
