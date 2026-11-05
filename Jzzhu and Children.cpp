#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int mx=0,idx=n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        int temp=(x+k-1)/k;
        if(temp>=mx)
        {
            mx=temp;
            idx=i;
        }

    }
    //cout<<mx<<endl<<idx<<endl;
    cout<<idx<<endl;
}
