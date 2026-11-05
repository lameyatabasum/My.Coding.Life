#include<bits/stdc++.h>
using namespace std;
int queries(vector<long long>&a,int n,int target)
{
   int b=0,e=n-1;
   int ans=-1;
   while(b<=e)
   {
       int mid=b+(e-b)/2;
       if(a[mid]>=target)
       {
           ans=mid;
           e=mid-1;

       }
       else
         b=mid+1;

   }
   if(ans==-1)
    return -1;
   else
    return ans+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long>a(n);
        vector<long long>b(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        sort(a.rbegin(),a.rend());
        for(int i=1;i<n;i++)
            a[i]=a[i-1]+a[i];
        for(int i=0;i<m;i++)
        {
        int temp=b[i];
        int lameya=queries(a,n,temp);
        cout<<lameya<<endl;
        }


    }
}
