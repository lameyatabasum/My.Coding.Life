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
        vector<int>a(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd==0&&even!=0)
        {
            cout<<1<<endl;
        }
        else if(even==0&&odd!=0)
        {
            cout<<n-1<<endl;
        }
        else
        {
            cout<<odd+1<<endl;
        }
    }
}
