#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int ca=0,cb=0;
        char a[6];
        cin>>a;
        for(int i=0;i<5;i++)
        {
            if(a[i]=='A')
                ca++;
            else
                cb++;
        }
        if(ca>cb)
            cout<<'A'<<endl;
        else
            cout<<'B'<<endl;
    }
}
