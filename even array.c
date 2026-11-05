#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=i%2)
            {
                if(i%2==0)
                    odd++;
                else
                    even++;
            }
        }
        if(odd==even)
            printf("%d\n",odd);
        else
           printf("-1\n");

    }
}
