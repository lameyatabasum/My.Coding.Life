#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;

    if(m%n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        int c=0;
        while(1)
        {
           if(m==n)
           {
               cout<<c<<endl;
               break;
           }
           if(m%3==0 && (m/3)%n==0)
           {
                  m/=3;
           }
           else if(m%2==0 && (m/2)%n==0)
           {
                  m/=2;
           }
           else
           {
               cout<<-1<<endl;
               break;
           }
           c++;
        }
    }
}
