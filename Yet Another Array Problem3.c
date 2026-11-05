#include<stdio.h>
#define MAXP 1000000
int primes[80000];
int pc = 0;

void sieve() {
    static bool mark[MAXP+1];
    for (int i = 2; i * i <= MAXP; i++) {
        if (!mark[i]) {
            for (int j = i*i; j <= MAXP; j += i)
                mark[j] = true;
        }
    }
    for (int i = 2; i <= MAXP; i++) {
        if (!mark[i])
            primes[pc++] = i;
    }
}

int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int a[n];
       int ans=0;
       int flag=0;
       int found=0;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           if(found==0)
           {
           if(a[i]%2!=0)
            found=1;
           }

       }
       if(found==1)
        printf("2\n");
       else
       {
       for(int i=0;i<n;i++)
       {
           if(flag==0)
           {
           for(int j=0;j<13;j++)
           {
             if(a[i]%primes[j]!=0)
             {
               ans=primes[j];
               flag=1;
               break;
             }
           }
         }
      }
      if(flag==1)
      printf("%d\n",ans);
      else
        printf("-1\n");
    }
    }

}
