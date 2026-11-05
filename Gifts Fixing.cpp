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
        vector<int>b(n);
        cin>>a[0];
        int sa=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<sa)
                sa=a[i];
        }
        cin>>b[0];
        int sb=b[0];
        for(int i=1;i<n;i++)
        {
            cin>>b[i];
            if(b[i]<sb)
                sb=b[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int tempa=a[i]-sa;
            int tempb=b[i]-sb;
            sum+=max(tempa,tempb);

        }
        cout<<sum<<endl;
    }
}
