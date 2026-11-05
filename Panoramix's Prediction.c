#include<stdio.h>
int main()
{
    int prime[15]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n,p;
    scanf("%d%d",&n,&p);
    int temp;
    for(int i=0;i<15-1;i++)
    {
        if(prime[i]==n&&prime[i+1]==p)
            {
                printf("YES\n");
                return 0;
            }

    }
    printf("NO\n");
    return 0;
}
