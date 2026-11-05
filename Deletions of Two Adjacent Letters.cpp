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
        char f;
        cin>>f;
        int l=s.length(),flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==f)
            {
                int b=i;
                int e=l-i-1;
                if(b%2==0 && e%2==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
