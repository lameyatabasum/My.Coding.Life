#include<stdio.h>
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      int c[n];
      int k=n-1;
      for(int i=1;i<=n;i++)
      {
         char a[5];
         for(int j=0;j<4;j++)
         {
            scanf(" %c",&a[j]);
            if(a[j]=='#')
            {
                c[k]=j+1;
                k--;
            }

         }
      }
      for(int i=0;i<n;i++)
          printf("%d ",c[i]);
       printf("\n");
    }

}
