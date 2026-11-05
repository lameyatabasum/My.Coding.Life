#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;

    vector<int>a(n+1),b(n+1);
    a[0]=0;
    b[0]=0;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];

        long long cur_sum=a[i]-a[i-1];
        if(cur_sum%2==1)
        {
            if(b[i]==b[i-1])
                sum+=(cur_sum-1);
            else
                sum+=cur_sum;
        }
        else
        {
            if(b[i]==b[i-1])
                sum+=(cur_sum);
            else
                sum+=(cur_sum-1);
        }
    }
    sum+=(m-a[n]);
    cout<<sum<<endl;
    }
}
