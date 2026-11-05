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
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(4*n);
        for(int i=0;i<4*n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int flag=0;
        for(int i=0;i<4*n;i+=2)
        {
            if(a[i]!=a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            int m=4*n;
            ll area=a[0]*a[m-1];
            for(int i=0;i<m/2;i+=2)
            {
                if(a[i]*a[m-1-i]!=area)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
     }
}
