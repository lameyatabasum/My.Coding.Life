#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j=0;
    char temp[100];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
     int la;
     scanf("%d",&la);
     char a[20];
     scanf("%s",a);
     int lbc;
     scanf("%d",&lbc);
     char b[20],c[20];
     scanf("%s %s",b,c);
     for(j=0;j<lbc;j++)
     {
         temp[0]=b[j];temp[1]='\0';
         if(c[j]=='V')
         {
             strcat(temp,a);
             strcpy(a,temp);
         }
         else
         {
             strcat(a,temp);
         }

     }
     printf("\n%s",a);
    }
    return 0;
}
