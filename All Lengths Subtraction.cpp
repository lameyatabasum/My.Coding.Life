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
        {
            cin>>a[i];
        }
        int b=0,e=n-1;
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(a[b]==i)
                b++;
            else if(a[e]==i)
                e--;
            else
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
