#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ls=s.length();
    int l=0, r=s.length()-1;
    int c=0;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            c=1;
            break;
        }
      l++;
      r--;
    }
    if(c==0)
    {
        int f=0;
        for(int i=1;i<ls;i++)
        {
            if(s[0]!=s[i])
            {
                cout<<ls-1;
                return 0;
            }
        }
        cout<<0;
        return 0;
    }
    else
      cout<<s.length();
}
