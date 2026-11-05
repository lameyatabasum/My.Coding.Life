#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k>26)
      k=26;
    string f="";
    for(int i=0;i<k;i++)
    {
        char c='a'+i;
        f+=c;

    }
    int temp=n/k;
    for(int i=0;i<temp;i++)
    {
        cout<<f;
    }
    int m=n%k;
    for(int i=0;i<m;i++)
    {
        cout<<f[i];
    }

}
