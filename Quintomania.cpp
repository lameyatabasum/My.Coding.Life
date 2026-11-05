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
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            int temp=abs(a[i]-a[i+1]);
            if(temp==5 || temp==7)
                flag=0;
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
}
