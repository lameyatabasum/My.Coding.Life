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
        vector<long long>a(n);
        int idx=0;
        long long sum=0;
        cin>>a[0];

        long long l=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            sum+=max(a[i-1],a[i]);
            if(a[i]>l)
            {
                l=a[i];
                idx=i;
            }
        }
        sum+=max(a[n-1],a[0]);
        sum-=a[idx];
        cout<<sum<<endl;
    }
}
