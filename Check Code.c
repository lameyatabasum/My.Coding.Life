#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int s=m+n+2;
    char a[s];
    scanf("%s",a);
    int flag1=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            flag1=1;
        }
        else
        {
            flag1=0;
            break;
        }
    }
    //printf("%d\n",flag1);
    int flag3=0;
    if(a[m]=='-')
      flag3=1;
      //printf("%d\n",flag3);
    int flag2=0;
    for(int i=m+1;i<s-1;i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            flag2=1;
        }
        else
        {
            flag2=0;
            break;
        }
    }
    //printf("%d\n",flag2);
    int flag=flag1+flag2+flag3;
    if(flag==3)
        printf("Yes");
    else
        printf("No");
}
