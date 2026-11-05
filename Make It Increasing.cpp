#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        int c=0,flag=0;
        for(int i=n-2;i>=0;i--)
        {
            while(a[i]>=a[i+1])
            {

              if(a[i]==0)
                {
                flag=1;
                break;
                }
                c++;
               a[i]/=2;
            }
            if(flag==1)
                break;

        }

        if(flag==1)
            cout<<-1<<endl;
        else
            cout<<c<<endl;
    }
}
