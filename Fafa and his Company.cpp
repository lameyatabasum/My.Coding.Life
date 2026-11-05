#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=-1;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int temp=n/i;
            if(temp==i)
                sum++;
            else
                sum+=2;

        }
    }
    cout<<sum<<endl;
}
