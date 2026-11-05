#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>s(8);
        for(int i=0;i<8;i++)
        {

            cin>>s[i];
        }
        int c=0;
        for(int i=0;i<8;i++)
        {
           int j=0,b=0,e=0;
           while(j<8)
           {
               if(s[i][j]=='#')
               {
                   b=j;
                   break;
               }
               j++;
           }

           for(int k=j+1;k<8;k++)
           {
               if(s[i][k]=='#')
               {
                   e=k;
               }
           }
           if(b<e)
           {
               //cout<<b<<" "<<e<<endl;
               c=(e-b)/2 + b;
               break;
           }
        }
        int r=0;
        for(int i=0;i<8;i++)
        {
            if(s[i][c]=='#')
            {
                r=i;
                break;
            }
        }
        cout<<r+1<<" "<<c+1<<endl;
    }
}
