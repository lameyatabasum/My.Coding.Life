#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((a[i]+a[j])<=d && i!=j)
                {
                    flag=1;
                    break;
                }
            }
        }
        int f2=0;
        if(a[n-1]>d)
        {
            if(flag==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"YES"<<endl;
    }
}
