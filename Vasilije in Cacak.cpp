#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum_min= k*(k+1)/2;
        long long sum_max=n*k - k*(k-1)/2;
        if(x>=sum_min&&x<=sum_max)
          cout << "YES"<<endl;
        else
          cout<<"NO"<<endl;

    }
}
