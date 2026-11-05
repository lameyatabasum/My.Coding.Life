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
        string a;
        cin>>a;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            flag=0;
            if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z'))
                flag=1;
            if(flag==0)
            {
                break;
            }
        }
        if(flag==0)
            printf("NO\n");
        else
        {
            int found=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    found=1;
                    break;
                }


            }
            if(found==1)
            {
                printf("NO\n");
            }
            else
                printf("YES\n");
        }
    }
}
