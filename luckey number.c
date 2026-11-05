#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,count1=0;
    char a[30];

    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='4')
        count++;
        if(a[i]=='7')
        count1++;
    }
    int sum=count+count1;
    if(sum==4||sum==7)
        printf("YES\n");
    else
        printf("NO\n");
}
