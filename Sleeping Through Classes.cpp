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
        cin>>s;
        int temp=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                temp=i+k;
            }
            else
            {
                if(temp<i)
                    sum++;

            }
        }
        cout<<sum<<endl;
    }
}
