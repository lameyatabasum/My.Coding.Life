#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("-1\n");

}
