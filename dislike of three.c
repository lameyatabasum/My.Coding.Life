#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        int count=0;
        int i=1;
        for(i=1;count<k;i++)
        {
            if(i%3!=0&&i%10!=3)
            {
                count++;
            }
        }
        printf("%d\n",i-1);
    }
}
