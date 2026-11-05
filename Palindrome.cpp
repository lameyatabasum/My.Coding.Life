#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int flag=0;
    for(int i=0;i<l/2 ;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;;
        }

    }
    if(flag==0)
        cout<<s<<endl<<"YES";
    else
    {
        reverse(s.begin(),s.end());
      while(!s.empty() && s[0] == '0')
       {
         s.erase(s.begin());
       }

        cout<<s<<endl<<"NO";

    }
}
