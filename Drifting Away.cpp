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
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='*'||s[i]=='>')&&(s[i+1]=='*'||s[i+1]=='<'))
               {
                   cout<<-1<<endl;
                   flag=1;
                   break;
               }
        }
        if(flag==0)
        {
        int l=count(s.begin(),s.end(),'<');
        int r=count(s.begin(),s.end(),'>');
        cout<<s.length()-min(l,r)<<endl;
        }
    }
}
