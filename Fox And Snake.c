#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int count=0;
    for(int i=1;i<=n;i++)
    {
       if(i%2!=0)
       {
           for(int j=1;j<=k;j++)
            printf("#");
            printf("\n");
       }
       else
       {
           if(count%2==0)
           {
               for(int j=1;j<k;j++)
                printf(".");
               printf("#");
               count++;
           }
           else if(count!=0)
           {
               printf("#");
               for(int j=1;j<k;j++)
                printf(".");
               count++;
           }
           printf("\n");

       }
    }
}
