#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b[100000];
    int k=0;
    int sum1=0,sum2=0;
    for(int i=0;i<;i++)
    {
        if(a[i]=='L')
        {
            if(sum2>0)
            {
                b[k]=sum2;
                k++;
                sum2=0;n
            }
            sum1++;
        }
        else if(a[i]=='R')
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

