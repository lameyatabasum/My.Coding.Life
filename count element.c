#include<stdio.h>
int main()
{
    int n,count1=0,count2=0;
    scanf("%d",&n);
    int  a[100];
    for(int i=0;i<n;i++)
        {scanf("%d",&a[i]);}
        int c=(n)/2;
    for(int i=0;i<n;i++)
    {
        int h=a[c];
        if(a[i]>h)
            count1++;
        else if(a[i]<h)
            count2++;
    }
    printf("%d\n%d",count1,count2);
}
