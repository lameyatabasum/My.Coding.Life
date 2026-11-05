#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int free=0,crime=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            if(free>0)
                free--;
            else
                crime++;
        }
        else
            free+=a[i];
    }
    printf("%d",crime);
}
