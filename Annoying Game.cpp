#include<bits/stdc++.h>
using namespace std;
long long kadane(const vector<long long>& arr) {
    long long best = LLONG_MIN, curr = 0;
    for (long long x : arr) {
        curr = max(x, curr + x);
        best = max(best, curr);
    }
    return best;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        vector<long long>b(n);
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        long long m=LLONG_MIN,idx=0;
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]>m)
            {
                m=b[i];
                idx=i;
            }
        }
        //cout<<idx;
        if(k%2==0)
        {
            cout<<kadane(a)<<endl;
        }
        else
        {
            long long ans=LLONG_MIN;
            for(int i=0;i<n;i++)
            {
                vector<long long> temp = a;
            temp[i] += b[i];
            ans = max(ans, kadane(temp));
            }
            cout<<ans<<endl;

        }
    }
}
