#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,f;
        cin>>s>>f;
        int c0=0,c1=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'&&f[i]=='1')
                c0++;
            else if(s[i]=='1'&&f[i]=='0')
                c1++;

        }
        ans=min(c1,c0);
        ans+=(max(c1,c0)-ans);
        cout<<ans<<endl;
    }
}
