#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int s=101;
    int si;
    for(int i=n-1;i>=0;i--)
    {
        if(s>a[i])
        {
            s=a[i];
            si=i;
        }


    }
    //printf("%d %d",s,si);
    int h=a[0];
    int hi=0;
   for(int i=1;i<n;i++)
   {
       if(a[i]>h)
       {
           h=a[i];
           hi=i;
       }
   }
   //printf(" %d %d",h,hi);
   if(hi>si)
    printf("%d",hi+(n-1-si)-1);
   else
    printf("%d",hi+(n-si-1));
}
