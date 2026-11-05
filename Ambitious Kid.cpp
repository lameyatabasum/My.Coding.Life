#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int mn=100000+5;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mn=min(mn,abs(x));
    }
    cout<<mn<<endl;
}
