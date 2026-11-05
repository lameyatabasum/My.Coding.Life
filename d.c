#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(long long*)b-*(long long*)a);}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long *a = malloc(n * sizeof(long long));
        long long *b = malloc(n * sizeof(long long));
        long long k=0;
        long long s=0;
        for(long long i=0;i<n;i++)
        {
           scanf("%lld",&a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                b[k]=a[i];
                k++;
            }

            else
                s=s+a[i];
        }

        if(k==0)
        {
            printf("0\n");
        }
        else
        {
            /*for(int i=0;i<k-1;i++)
            {
                for(int j=0;j<k-1-i;j++)
                {
                if(b[j]<b[j+1])
                {
                    long long h=b[j];
                    b[j]=b[j+1];
                    b[j+1]=h;

                }
                }
            }*/
            qsort(b,k,sizeof(long long),cmp);
            for(long long i=0;i<((k+1)/2);i++)
            {
                s=s+b[i];
            }
            printf("%lld\n",s);
        }
        free(a);
        free(b);

    }
}
