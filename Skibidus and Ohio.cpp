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
        int c=0,l=s.length();
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1])
                c++;
        }
        if(c==0)
        {
            cout<<l<<endl;
        }
        else cout<<1<<endl;
    }
}
