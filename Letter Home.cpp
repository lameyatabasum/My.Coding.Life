#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int d1=abs(a[n-1]-k)+a[n-1]-a[0];
        int d2=abs(k-a[0])+a[n-1]-a[0];
        cout<<min(d1,d2)<<endl;

    }
}
