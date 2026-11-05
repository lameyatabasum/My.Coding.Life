#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<0;
        return 0;
    }
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum=sum+(s[i]-'0');
    }
    if(sum<=9&&sum>=1)
    {
        cout<<1;
    }
    else
    {
        int c=1;
        while(sum>=10)
        {
            int f=sum;
            sum=0;
            while(f>0)
            {
                sum+=(f%10);
                f=f/10;
            }
            c++;
        }
        cout<<c;
    }
}
