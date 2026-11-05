#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        int sum=0,c=0,flag=0;
        while(n--)
        {
            cin>>s;
            if(flag==0)
            {
                sum+=s.length();
                if(sum<=k)
                    c++;
                else
                    flag=1;
            }

        }
        cout<<c<<endl;
    }
}
