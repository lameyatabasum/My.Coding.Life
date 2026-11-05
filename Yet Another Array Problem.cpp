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
        vector<int>primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
        vector<long long >a(n);
        int ok=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<primes.size();i++)
        {
            int ok=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]%primes[i]!=0)
                {
                    ok=1;
                    break;
                }
            }
            if(ok==1)
            {
                cout<<primes[i]<<endl;
                break;
            }
        }

    }

}
