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
        vector<long long>a(n+1);
        vector<long long>b(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        long long num=0;
        for(int i=1;i<=n;i++)
        {
            long long d=a[i]-a[i-1];
            if(d==i)
            {
                num++;
                b[i]=num;

            }
            else
            {
                int j=i-d;
                b[i]=b[j];
            }
        }
        for(int i=1;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
