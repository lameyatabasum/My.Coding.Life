#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cm=0,cs=0;
    while(n--)
    {
        int m,c;
        scanf("%d%d",&m,&c);
        if(m>c)
            cm++;
        else if(c>m)
            cs++;

    }
    if(cm>cs)
        printf("Mishka");
    else if(cm==cs)
        printf("Friendship is magic!^^");
    else
        printf("Chris");
}
