#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>p(4);

        for(int i=0;i<4;i++)
        {
            int x;
            cin>>p[i]>>x;
        }
        sort(p.begin(),p.end());

        long long l=p[2] - p[0];
        long long w=p[3] - p[1];

        cout<<l*w<<endl;
    }
}
