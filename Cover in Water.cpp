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
        int dot=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
                dot++;
        }
        if(s.find("...")!=string::npos)
            cout<<2<<endl;
        else
            cout<<dot<<endl;
    }
}
