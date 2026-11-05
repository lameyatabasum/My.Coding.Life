#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    int min=1000;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
            int m=a[i];
            while(m>0)
            {
                if(m%2==0)
                {
                    count++;
                    m=m/2;
                }
                else
                    break;
            }
            if(count<min)
                min=count;
            count=0;
    }
    printf("%d",min);
}
