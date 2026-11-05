#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        int m=a[i];
        int count=0;
        while(m>0)
        {
            int c=n%10;
            if(c==9)
             count++;
            m=m/10;
        }
        if(count>=1)
        {
            printf("%d\n",a[i]);
        }






    }

}
