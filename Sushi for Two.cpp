#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int b[100000];
    int k=0;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            if(sum2>0)
            {
                b[k]=sum2;
                k++;
                sum2=0;
            }
            sum1++;
        }
        else if(a[i]==2)
        {
            if(sum1>0)
            {
                b[k]=sum1;
                k++;
                sum1=0;
            }
            sum2++;
        }
    }
         if(sum2>0)
            {
                b[k]=sum2;
                k++;
                sum2=0;
            }
             if(sum1>0)
            {
                b[k]=sum1;
                k++;
                sum1=0;
            }
    int ans=0;
    int temp=0;
    for(int i=0;i<k-1;i++)
    {
        temp=min(b[i],b[i+1]);
        if(temp>ans)
            ans=temp;
    }
    cout<<2*ans;



}
