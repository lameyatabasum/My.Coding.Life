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
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum=0;
        for(long long i=1;i<n-1;i++)
        {
            if(i%2!=0)
            {
                long long temp=a[i-1]+a[i+1];

                if(temp>a[i])
                {
                    long long x=(temp-a[i]);
                    //cout<<x<<endl;
                    sum+=x;
                    if(a[i-1]>a[i])
                    {
                        x-=(a[i-1]-a[i]);
                        a[i-1]=min(a[i-1],a[i]);

                    }
                    a[i+1]=a[i+1]-x;

                }
            }
        }
        if(n%2==0)
        {
            if(a[n-2]>a[n-1])
            sum+=(a[n-2]-a[n-1]);
        }
        cout<<sum<<endl;
    }
}
