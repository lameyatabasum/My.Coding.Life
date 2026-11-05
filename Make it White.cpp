#include<bits/stdc++.h>
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
        int b=0,e=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                b=i;
                break;
            }
        }
        for(int i=n-1;i>=b;i--)
        {
            if(s[i]=='B')
            {
                e=i;
                break;
            }
        }
        sum=e-b+1;
        cout<<sum<<endl;
    }
}
