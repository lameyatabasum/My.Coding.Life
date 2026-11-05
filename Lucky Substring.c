#include<stdio.h>
int main()
{
    char a[51];
    scanf("%s",a);
    int count4=0,count7=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='4')
            count4++;
        else if(a[i]=='7')
            count7++;

    }
    if(count4==0&&count7==0)
        printf("-1");
    else
    {
        if(count4<count7)
            printf("7");
        else
            printf("4");
    }
}
