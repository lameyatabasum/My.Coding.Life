#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
            cout<<n<<endl;
        else
        {
            int s=((n/7))*7;
            int t1=s/10;
            int s1=t1%10;
            int b=((n/7)+1)*7;
            int t2=s/10;
            int b2=t2%10;

            int temp=n/10;
            int n1=temp%10;
            //cout<<n1<<" "<<s1<<" "<<b2;
            if(n1==s1)
                cout<<s<<endl;
            else
                cout<<b<<endl;


        }
    }
}
