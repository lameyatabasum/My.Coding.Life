#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        map<int ,int>f;
        int m1=a1+a2;
        f[m1]++;
        int m2=a4-a2;
        f[m2]++;
        int m3=a5-a4;
        f[m3]++;
        int mx=0;
        for(auto x : f)
        {
            if(x.second>mx)
                mx=x.second;
        }
        cout<<mx<<endl;
    }
}
