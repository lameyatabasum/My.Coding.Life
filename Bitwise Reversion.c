#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int a,b,c;
        int flag=1;
        for(int i=0;i<31;i++)
        {
            a=(x>>i)&1;
            b=(y>>i)&1;
            c=(z>>i)&1;
            int sum=a+b+c;
            if(sum==2)
            {
                flag=0;
                break;

            }
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
