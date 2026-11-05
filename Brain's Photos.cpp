#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int flag=0;
    while(n--)
    {
        for(int i=0;i<m;i++)
        {
            char f;
            cin>>f;
            if(f=='C'||f=='M'||f=='Y')
                flag=1;
        }
    }
    if(flag==1)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}
