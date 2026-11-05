#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      char a[100000];
      scanf("%s",a);
      int l=strlen(a);
      int count=0;
      for(int i=0;i<l;i++)
      {
           if(a[i]>='1'&&a[i]<='9')
            count++;
      }
      printf("%d\n",count);
      for(int i=0;i<l;i++)
      {
          if(a[i]>='1'&&a[i]<='9')
          {
              int c=a[i]-'0';
              //printf("%d",c);
              for(int j=0;j<l-i-1;j++)
              {
                  c=c*10;
              }
              printf("%d ",c);
          }
      }
      printf("\n");
    }
}
