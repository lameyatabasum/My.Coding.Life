#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    long int t[1001];
    int i,count=0;
    for(i=0;i<a;i++)
    {
        scanf("%ld",&t[i]);
    }
    int small=t[0];
    int big=t[0];
    for(i=1;i<a;i++)
    {

        if(small>t[i])
        {
         count++;
         small=t[i];
        }
        else if(big<t[i])
        {
            count++;
            big=t[i];
        }

    }
    printf("%d\n",count);

}
