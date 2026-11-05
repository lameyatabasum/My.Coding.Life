#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],h[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&h[i]);

    }
    if(n<=2)
        printf("%d\n",n);
    else
    {
    int count=0,o=x[0];
    for(int i=1;i<n-1;i++)
    {
        if((x[i]-o)>h[i])
        {
           count++;
           o=x[i];
        }
        else if(x[i+1]-x[i]>h[i])
        {
            count++;
            o=x[i]+h[i];
        }
        else
            o=x[i];
    }
    count=count+2;
    printf("%d\n",count);

    }

}
