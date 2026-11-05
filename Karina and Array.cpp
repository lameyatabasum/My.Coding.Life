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
        for(long long i=0;i<n;i++)
            cin>>a[i];
        long long mx=LLONG_MIN;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            long long temp=a[i]*a[i+1];
            if(temp>mx)
                mx=temp;
        }
        cout<<mx<<endl;
    }
}
