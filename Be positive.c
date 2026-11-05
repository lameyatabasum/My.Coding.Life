#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[10];
        int count=0,num=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                count++;
            else if(a[i]==-1)
                num++;

        }
        if(num%2!=0)
            count=count+2;
        printf("%d\n",count);


    }
}
