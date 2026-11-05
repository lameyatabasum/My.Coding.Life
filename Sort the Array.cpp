#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
      vector<long long>p(n);

    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p[i]=a[i];
        }

    sort(p.begin(),p.end());
    int b=-1,e=-1;
    for(int i=0;i<n;i++ )
    {
        if(a[i]!=p[i])
        {
            b=i;
            break;
        }

    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=p[i])
        {
            e=i;
            break;
        }
    }
    //cout<<b<<e<<endl;
    if(b==-1 &&e==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        reverse(a.begin()+b,a.begin()+e+1);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=p[i])
            {
                cout<<"no"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"yes"<<endl;
            cout<<b+1<<" "<<e+1<<endl;
        }
    }
}
