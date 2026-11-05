#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    if(n==1&&x==10)
    {
        cout<<-1<<endl;
    }
    if(n!=1&&x==10)
    {
        int a[n-1]={0};
        a[0]=10;
        for(int i=0;i<n-1;i++)
            cout<<a[i];

    }
    if(x<=9)
    {
        int a[n]={0};
        a[0]=x;
        for(int i=0;i<n;i++)
            cout<<a[i];
    }
}
