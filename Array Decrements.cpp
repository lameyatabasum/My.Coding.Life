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
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
         for(int i=0;i<n;i++)
            cin>>b[i];
        int flag=0;
        long long d=1e9+5;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=0)
            d=min(d,a[i]-b[i]);
        }

         for(int i=0;i<n;i++)
            {
                if(b[i]>a[i])
                {
                    flag=1;
                    break;
                }
                long long temp=a[i]-b[i];
                if(b[i]!=0)
                {
                    if(temp!=d)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(temp>d)
                        {
                          flag=1;
                          break;
                        }

                }
            }
            if(flag==1)
                 cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }
}
