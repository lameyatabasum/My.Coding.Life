#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int flag=0;
    long long mx=max(a[0],b[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]<=mx || b[i]<=mx)
        {
            if(a[i]<=mx && b[i]<=mx)
            {
                mx=max(a[i],b[i]);
            }
            else if(a[i]<=mx)
                mx=a[i];
            else if(b[i]<=mx)
                mx=b[i];
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
