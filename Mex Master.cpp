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
    int c=0,flag=0;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        if(x==0)
            c++;
        if(x>1)
            flag=1;
    }

    if(c<=(n+1)/2)
        cout<<0<<endl;
    else if(flag==1)
        cout<<1<<endl;
    else if(c==n)
        cout<<1<<endl;
    else
        cout<<2<<endl;
    }

}
