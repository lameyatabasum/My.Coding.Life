#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n>=k)
    {
        sort(a.rbegin(),a.rend());
        cout<<a[k-1]<<" "<<a[k-1]<<endl;
    }
    else
        cout<<"-1"<<endl;

}
