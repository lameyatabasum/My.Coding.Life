#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(7);
    int sum=0;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>n)
    {
        int sum1=0;
        for(int i=0;i<7;i++)
        {
            sum1+=a[i];
            if(sum1>=n)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
    else if(sum<=n)
    {
        int sum1=n%sum;
        if(sum1==0)
        {
            for(int i=6;i>=0;i--)
            {
                if(a[i]!=0)
                {
                    cout<<i+1;
                    return 0;
                }
            }
        }
        int sum2=0;
        for(int i=0;i<7;i++)
        {
            sum2+=a[i];
            if(sum2>=sum1)
            {
                cout<<i+1;
                return 0;
            }
        }
    }

}
