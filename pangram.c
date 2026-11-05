#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
   char a[n+1];
   scanf("%s",a);
   int freq[124]={0};
   for(int i=0;a[i]!=0;i++)
   {
       a[i]=tolower(a[i]);
       freq[a[i]]++;
   }
   int flag=0;
   for(int i=97;i<123;i++)
   {
       if(freq[i]>0)
        flag=1;
       else if(freq[i]==0)
       {
        flag=0;
        break;
       }
   }
   if(flag==1)
    printf("YES");
   else
    printf("NO");

}
