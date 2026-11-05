#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char hate[8]="I hate ";
    char love[8]="I love ";
    char that[6]="that ";
    char it[3]="it";
    for(int i=1;i<=t;i++)
    {
        if(i%2!=0)
            printf("%s",hate);
        else
            printf("%s",love);
        if(i!=t)
            printf("%s",that);
    }
    printf("%s",it);

}
