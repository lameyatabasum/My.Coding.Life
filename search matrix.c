#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int s=m*n;
    int a[s];
    for(int i=0;i<s;i++)
    {
            scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0;i<s;i++)
    {
            if(a[i]==x)
            {
                flag=1;
                printf("will not take number");
                break;
            }
    }
    if(flag==0)
        printf("will take number");


}
