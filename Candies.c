#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int k=2;
        while(k>1)
        {
            int p=pow(2,k);
            int d=p-1;
            if(n%d==0)
              {
                 printf("%d\n",n/d);
                 break;
              }
            k++;
        }
    }
}

