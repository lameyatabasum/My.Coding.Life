#include<bits./stdc++.h>
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
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                a++;
            else
                b++;
        }
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(a==0||b==0)
        {
            cout<<-1<<endl;
            continue;
        }
        int sum=abs(a-b);
        if(a>b)
        {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                as++;
                if(i+1<s.length() && a[i+1]=='b')
                {
                    if(as==sum)
                    {
                        cout<<sum;
                        break;
                    }
                }
                else
                {
                    as==0;
                }
            }
            if(s[i]=='b')
            {
                as++;
                if(i+1<s.length() && a[i+1]=='a')
                {
                    if(bs==sum)
                    {
                        cout<<sum;
                        break;
                    }
                }
                else
                {
                    as==0;
                }
            }

        }

    }
}
