#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    if(m>n)
        cout<<-1<<endl;
    else if(m==n)
        cout<<n<<endl;
    else
    {
        int temp=n/2 + n%2;
        if(temp<=m)
        {
            cout<<m;
        }
        else
        {
            if(temp%m==0)
            {
                cout<<temp<<endl;
            }
            else
            {
                cout<<(temp/m + 1)*m<<endl;
            }
        }
    }
}
