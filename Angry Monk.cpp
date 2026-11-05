#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k,n;
        cin>>k>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        long long sum=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>1)
             sum+=(2*a[i]-1);
            else if(a[i]==1)
                sum++;
        }
        cout<<sum<<endl;
    }
}
