#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        long long c=0;
        for(long long i=0;i<n;i++)
        {
            long long templ=l-a[i];
            long long  cl= lower_bound(a.begin(), a.end(), templ) - a.begin();
            long long tempr=r-a[i];
            long long cr= upper_bound(a.begin(), a.end(), tempr) - a.begin();
            c+=cr-cl;
           if(l<=2*a[i]&&2*a[i]<=r)
            c--;
        }


        cout<<c/2<<endl;

    }
}
