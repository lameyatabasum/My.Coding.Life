#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<4;i++)
    {
        int already=0;
        for(int j=0;j<i;j++)
        {
                if(a[i]==a[j])
                {
                    already=1;
                }
        }
        if(already==0)
          sum++;
    }
    printf("%d",4-sum);
}
