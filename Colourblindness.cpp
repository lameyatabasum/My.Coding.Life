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
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='B')
                a[i]='G';
            if(b[i]=='B')
                b[i]='G';
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
}
