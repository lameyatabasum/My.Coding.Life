#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=0,r=n-1;
    int count=1,s=0,d=0;
    while(l<=r)
    {
        if(a[l]>=a[r])
        {
            if(count%2!=0)
                s=s+a[l];
            else
                d=d+a[l];
            count++;
            l++;
        }
        else if(a[l]<a[r])
        {
            if(count%2!=0)
            {
                s=s+a[r];
            }
            else
            {
                d=d+a[r];
            }
            count++;
            r--;
        }
        //else
            //d=d+a[i];
    }
    printf("%d %d",s,d);
}
