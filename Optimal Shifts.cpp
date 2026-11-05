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
    int a[n];
    int k=s.length();
    int m=0;
    int f=s.length()-1;
    for(int i=f;i>=0;i--)
    {
        if(s[i]=='1')
        {
                a[m]=k-i-1;
                k=i;
                m++;
        }
    }
    a[0]+=k;
    int mx=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]>mx)
            mx=a[i];
    }
    cout<<mx<<endl;

    }
}
