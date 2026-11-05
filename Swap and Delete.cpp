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
        int c0=count(s.begin(),s.end(),'0');
        int c1=s.length()-c0;
        if(c0==c1)
            cout<<0<<endl;
        else
        {
           int l=0;
           for(int i=0;i<s.length();i++)
           {
               if(s[i]=='1')
               {
                   if(c0>0)
                   {
                       l++;
                       c0--;
                   }
                   else
                    break;
               }
               if(s[i]=='0')
               {
                   if(c1>0)
                   {
                       l++;
                       c1--;
                   }
                   else
                    break;
               }
           }
           cout<<s.length()-l<<endl;
        }

    }
}
