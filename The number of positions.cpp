#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int temp=n-a;
    if(temp>b)
        cout<<b+1;
    else
    {
        cout<<temp;
    }
}
