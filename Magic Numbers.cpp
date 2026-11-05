#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    if(s[0]!='1')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='1'||s[i]=='4')
            flag=1;
        else
        {
            flag=0;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4')
            c++;
        else
        {
            if(c>2)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                c=0;
            }
        }
    }
        if(c>2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
}
