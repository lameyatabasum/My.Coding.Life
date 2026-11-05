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
        cin>>a[0];
        long long s=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            s+=abs(a[i-1]-a[i]);
        }

        long long min_sum=s;

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                long long temp=s-abs(a[0]-a[1]);
                min_sum=min(temp,min_sum);
            }
            else if(i==(n-1))
            {
                long long temp=s-abs(a[n-2]-a[n-1]);

                min_sum=min(temp,min_sum);
            }
            else
            {
                long long temp=s-abs(a[i+1]-a[i])-abs(a[i-1]-a[i])+abs(a[i+1]-a[i-1]);
                min_sum=min(temp,min_sum);
            }
        }

        cout<<min_sum<<endl;
    }
}
