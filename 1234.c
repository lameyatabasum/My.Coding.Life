#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
    if(a%b==0)
    {
        printf("0\n");
    }
    else if(a%b!=0)
    {
        c=a/b;
        d=((c+1)*b)-a;
    printf("%d\n",d);
    }
    }
    printf("\n");

}
