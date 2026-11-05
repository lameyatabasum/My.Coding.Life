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
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                c1++;
            else
               c0++;

        }
        int sum=0;
        sum=(c1-1)*c1 + (c1+1)*c0;
        cout<<sum<<endl;

    }
}
