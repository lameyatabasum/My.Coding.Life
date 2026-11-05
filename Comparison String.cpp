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
        string s;
        cin>>s;
        int mx=0;

        for(int i=0;i<s.length(); )
        {
            if(s[i]=='<')
            {
                int c=0;
                while(i<s.length() && s[i]=='<')
                {
                    i++;
                    c++;
                }
                mx=max(mx,c);

            }
            else
            {
                int c=0;
                while(i<s.length() && s[i]=='>')
                {
                    i++;
                    c++;
                }
                mx=max(mx,c);

            }
        }
        cout<<mx+1<<endl;
    }
}
