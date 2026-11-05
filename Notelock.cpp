#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int b=0,e=0;
        int c=1;
        vector<int>a(n);
        int m=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='0')
                flag=1;
            if(s[i]=='1')
            {
                a[m]=i;
                m++;

            }
        }
        if(flag==0)
            cout<<0<<endl;
        else
        {
            int ans=1;
            for(int i=0;i<m-1;i++)
            if(a[i+1]-a[i]>=k)ans++;

            cout<<ans<<endl;

        }

    }
}
