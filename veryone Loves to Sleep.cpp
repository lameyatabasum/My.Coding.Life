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
        int H, M;
        cin>>H>>M;
        int stemp=H*60+M;
        int ansh=0,ansm=0;
        int mn=90000;
        while(n--)
        {
            int h,m;
            cin>>h>>m;
            int temp=h*60+m;
            int f=0;
            if(temp<stemp)
            {
                f=temp-stemp+24*60;
            }
            else
            {
                f=temp-stemp;
            }
            if(mn>f)
                mn=f;

        }
        ansh=mn/60;
        ansm=mn%60;
        cout<<ansh<<" "<<ansm<<endl;
    }
}
