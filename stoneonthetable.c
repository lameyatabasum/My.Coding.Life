#include<stdio.h>
int main()
{
    int t,i,count=0;
    scanf("%d",&t);
    char s[51];
        scanf("%s",s);
    for(i=0;i<t-1;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    printf("%d\n",count);

}
