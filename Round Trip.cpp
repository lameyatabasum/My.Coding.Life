#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        int c,d;
        cin>>a>>b>>c>>d;
        string s;
        cin>>s;
        if(a<b)
            cout<<d<<endl;
        else
        {
         int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a=max(0LL,a-c);
                f++;
            }
            else
            {
                if(a<b)
                {
                    a=max(0LL,a-c);
                    f++;
                }
            }
        }
        cout<<f<<endl;
        }
    }
}
