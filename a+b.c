#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[4];
    while(t--)
    {
        scanf("%s",a);
        int p=a[0]-'0';
        int q=a[2]-'0';
        printf("%d\n",p+q);

    }
}
