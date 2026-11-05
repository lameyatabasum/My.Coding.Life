#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int l=s.length();

    for(int i=0;i<l/2;i++)
    {
        int j=l-i-1;
        if(s[i]!=s[j])
        {
            if(s[i]=='?'&&s[j]!='?')
                s[i]=s[j];
            else if(s[i]!='?'&&s[j]=='?')
                s[j]=s[i];
            else
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else if(s[i]=='?'&&s[j]=='?')
            s[i]='a',s[j]='a';
    }
    if(l%2!=0)
    {
        if(s[l/2]=='?')
            s[l/2]='a';
    }
    cout<<s;
    return 0;
}
