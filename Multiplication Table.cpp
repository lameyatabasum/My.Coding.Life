#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;

    long long mn=min(n,x);
    long long c=0;
    for(int i=1;i<=mn;i++)
    {
        if(x%i==0)
        {
            if(x/i<=n)
                c++;
        }
    }
    cout<<c<<endl;
}
