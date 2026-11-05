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
        long long sum=0,nonzero=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]>0)
                nonzero++;
        }
        int ans=min(nonzero, sum-n+1);
        cout<<ans<<endl;

    }
}
