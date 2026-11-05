#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
        int flag=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='#')
                {
                    flag=1;
                    c=j;
                    b=i;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        flag=0;
        int e=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='#')
                {
                    flag=1;
                    e=i;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        int r=(e-b)/2 +1 +b;
        cout<<r<<" "<<c+1<<endl;
    }
}
