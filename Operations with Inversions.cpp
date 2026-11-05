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
        int a[n];
        cin>>a[0];
        int mx=a[0];
        int c=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(mx>a[i])
                c++;
            else
                mx=a[i];
        }
        cout<<c<<endl;


    }
}
