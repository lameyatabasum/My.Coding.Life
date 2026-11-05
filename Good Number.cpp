#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t>>k;
    int c=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]!='0')
        {
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        int l=s.length();
        int flag=0;
        for(int i=0;i<=k;i++)
        {
            if(s[i]-'0'!=i)
                {
                    flag=1;
                    break;
                }
        }
        if(flag==0)
            c++;
        }
    }
    cout<<c<<endl;
}
