#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=(n+1)/2;
    if(n%2==0)
    {
        if(f%2==0)
         cout<<f-1<<" "<<f+1;
        else
          cout<<f-2<<" "<<f+2;

    }
    else
    {
        cout<<f-1<<" "<<f;
    }
}
