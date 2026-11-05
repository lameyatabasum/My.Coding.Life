#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(s>sum)
        cout<<-1<<endl;
    else
    {
        int c=0,i=0,j=n-1;
        int temp=sum-s, ss=0;
        while(i<=j)
        {
            if(ss==temp)
                break;
            int b=i,cb=0;
            while(b<=j)
            {
                if(a[b]==1)
                    break;
                b++;
            }
            int e=j;
            while(i<=e)
            {
                if(a[j]==1)
                {
                    break;
                }
                e--;
            }
            if(b<=e)
            {
                i+=b;
                i++;
            }
            else
            {
                j-=(n-e);
            }
            c+=min(b,n-e);
            ss++;

        }
        cout<<c<<endl;


    }
    }
}
