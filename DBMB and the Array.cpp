#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x;
        cin>>n>>s>>x;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        int d=s-sum;
        //cout<<d%x<<endl;
        if(d>=0 && d%x==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
