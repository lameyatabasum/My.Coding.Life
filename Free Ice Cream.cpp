#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum;
    cin>>sum;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        char a;
        long long f;
        cin>>a>>f;
        if(a=='-')
            f=-f;
        long long temp=sum+f;
        if(temp<0)
            cnt++;
        else
            sum=temp;
    }
    cout<<sum<<" "<<cnt<<endl;
}
