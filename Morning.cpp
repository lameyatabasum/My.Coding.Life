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
        int sum=0;
        for(int i=0;i<s.length()-1;i++)
            {
                int x;
                int y;
                if(s[i]=='0')
                {
                    x=s[i]-'0'+10;
                }
                else
                    x=s[i]-'0';

                if(s[i+1]=='0')
                    y=s[i+1]-'0'+10;
                else
                    y=s[i+1]-'0';

                sum+=(abs(x-y)+1);
            }
           int x=s[0]-'0';
           if(x==0)
           sum+=x+10;
           else
            sum+=x;
           cout<<sum<<endl;
    }
}
