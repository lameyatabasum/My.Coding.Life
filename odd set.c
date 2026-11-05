#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int d=2*n;
    int a[d];
    int count1=0,count2=0;
    for(int i=0;i<d;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
            count1++;
        else
            count2++;
    }
    if(count1==count2)
        printf("Yes\n");
    else
        printf("No\n");
    }

}
