#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,m,e;
    cin>>s>>m>>e;
    int sum=s+m+e;
    int mx=max(s,max(m,e));
    int mn=min(s,min(m,e));
    if(mx-mn>=10)
        cout<<"check again"<<endl;
    else
        cout<<"final"<<" "<<sum-mx-mn<<endl;
}
