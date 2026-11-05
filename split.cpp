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
        int f=2*n;
        vector<int>a(f);
        map<int, int>freq;
        int flag=0;
        cin>>a[0];
        freq[a[0]]++;
        for(int i=1;i<f;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
            if(a[0]!=a[i])
                flag=1;
        }
        if(flag==0)
        {
            if(n%2==0)
                cout<<0<<endl;
            else
                cout<<2<<endl;
        }
        else
        {
            int d=0,odd=0,even=0;
            for(auto x : freq)
            {
                d++;
                if(x.second%2!=0)
                    odd++;
            }
            even=d-odd;
            int x = min(even, n);
            if(odd==0)
            {
                if((x%2)!=(n%2))
                    x=x-1;
            }
            int ans=odd + 2 * x;
            cout<<ans<<endl;

        }

    }
}
