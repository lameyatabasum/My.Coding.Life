#include<bits/stdc++.h>
using namespace std;
int main()
{
    //something new
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c1=0,c0=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
               c1++;
            else
                c0++;
        }
        int temp=min(c1,c0);
        if(temp%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
}
