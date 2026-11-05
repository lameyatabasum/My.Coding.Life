#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        vector<string>s(8);
        for(int i=0;i<8;i++)
        {
            cin>>s[i];
        }
        char ans;
        for(int i=0;i<8;i++)
        {
            int c=0;
            for(int j=0;j<8;j++)
            {
                if(s[i][j]=='R')
                    c++;
            }
            if(c==8)
            {
                flag=1;
                ans='R';
                break;
            }

        }
        for(int i=0;i<8;i++)
        {
            int c=0;
            for(int j=0;j<8;j++)
            {
                if(s[j][i]=='B')
                    c++;

            }
            if(c==8)
            {
                flag=1;
                ans='B';
                break;
            }
        }
            cout<<ans<<endl;

    }
}
