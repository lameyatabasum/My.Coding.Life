#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum=0;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
                sum++;
        }
        int b=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
                {
                    b=i;
                    break;
                }

        }
        int e=-1;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]=='1')
                {
                    e=i;
                    break;
                }
        }
        int ans=sum-b-(l-1-e);
        cout<<ans<<endl;
    }
}
