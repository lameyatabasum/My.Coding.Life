#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        cin>>a[0];
        int c=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i-1]%2==a[i]%2)
                c++;
        }
        cout<<c<<endl;
    }
}
