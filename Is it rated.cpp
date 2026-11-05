#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
        {
            flag=1;
        }

    }
    if(flag==1)
    {
      cout<<"rated"<<endl;
      return 0;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(a[i-1]<a[i])
            {
                cout<<"unrated"<<endl;
                return 0;
            }
        }

    }
    cout<<"maybe"<<endl;

}
