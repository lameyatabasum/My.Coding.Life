#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int temp[10]={5,15,30,50,75,105,140,180,225,275};
    int c=240-b;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(c>=temp[i])
            count++;
    }
    if(count>a)
       printf("%d",a);
    else
        printf("%d",count);

}
