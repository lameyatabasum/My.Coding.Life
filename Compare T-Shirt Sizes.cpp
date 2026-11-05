#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int al=a.length();
        int bl=b.length();

        if(a[al-1]>b[bl-1])
            cout<<'<'<<endl;
        else if(a[al-1]<b[bl-1])
            cout<<'>'<<endl;
        else
        {
            if(a[al-1]=='S'&& b[bl-1]=='S')
            {
                if(al>bl)
                    cout<<'<'<<endl;
                else if(al<bl)
                    cout<<'>'<<endl;
                else
                    cout<<'='<<endl;
            }
            else
                if(al>bl)
                    cout<<'>'<<endl;
                else if(al<bl)
                    cout<<'<'<<endl;
                else
                    cout<<'='<<endl;
        }

    }
}
