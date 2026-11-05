#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c=n-2;
        int count=(c/4)+1;
        printf("%d\n",count);
    }
}
