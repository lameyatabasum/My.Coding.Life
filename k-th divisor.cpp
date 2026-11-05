#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a;

    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            long long temp=n/i;

            if(i!=temp)
            {
                a.push_back(i);
                a.push_back(temp);
            }
            else
                a.push_back(i);
        }
    }
    sort(a.begin(),a.end());
    if(a.size()>=k)
    cout<<a[k-1]<<endl;
    else
        cout<<-1<<endl;

}
