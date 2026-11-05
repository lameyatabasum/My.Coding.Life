#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c=abs(a-b);
        int d=(c+9)/10;
        printf("%d\n",d);
    }
}
