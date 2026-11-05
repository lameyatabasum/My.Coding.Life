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
        ll n,k,x;
        cin>>n>>k>>x;
        if(x==1)
        {
            if(n%2==0)
            {
                if(k>=2)
                {
                    cout<<"YES"<<endl;
                    ll m=n/2;
                    cout<<m<<endl;
                    for(int i=0;i<m;i++)
                        cout<<2<<" ";
                }
                else
                    cout<<"NO";
            }
            else
            {
                if(k>=3)
                {
                    cout<<"YES"<<endl;

                    ll m=(n-3)/2;
                    cout<<m+1<<endl;
                    cout<<3<<" ";
                    for(int i=0;i<m;i++)
                        cout<<2<<" ";
                }
                else
                    cout<<"NO";
            }
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++)
                cout<<1<<" ";
        }
        cout<<endl;
     }
}
