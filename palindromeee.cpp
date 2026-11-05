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
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;

}

