#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    int sum=0;
    for(int i=1;i<=t;i++)
    {
        int s=v1+(i-1)*d;
        int b=v2+(t-i)*d;
        int temp=min(s,b);
        sum+=temp;
    }
    cout<<sum<<endl;
}
