#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=0;i*i<=m;i++)
    {
        int f=i*i;
        int h=m-f;
        if((h*h+i)==n)
            c++;
    }
    cout<<c;
}
