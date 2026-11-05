#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n>=k)
        {
        if(n%2==0)
        {
            if(k%2!=0)
            {
                if(k*2<=n)
                {
                    cout<<"YES"<<endl;
                    for(int i=1;i<k;i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<n-((k-1)*2);
                }
                else
                    cout<<"NO";
            }
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)
                    cout<<1<<" ";
                cout<<n-(k-1);
            }
        }
        else
        {
            if(k%2==0)
                cout<<"NO";
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)
                    cout<<1<<" ";
                cout<<n-(k-1);
            }
        }
        }
        else
            cout<<"NO";
        cout<<endl;
    }
}
