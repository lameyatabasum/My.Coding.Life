#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        string s="";

        for(int i=0;i<b;i++)
        {
            s+='a'+i;
        }
        int n1=n/b;
        int m1=n%b;
        for(int i=0;i<n1;i++)
        {
            cout<<s;
        }
        for(int i=0;i<m1;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
