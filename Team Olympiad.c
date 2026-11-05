#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b1[10000],b2[10000],b3[10000];
    int k1=0,k2=0,k3=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
          b1[k1]=i+1;
          k1++;
        }
        else if(a[i]==2)
        {
            b2[k2]=i+1;
            k2++;
        }
        else if(a[i]==3)
        {
            b3[k3]=i+1;
            k3++;
        }
    }
    if(k1>0&&k2>0&&k3>0)
    {
    int w = k1;
    if(k2 < w) w = k2;
    if(k3 < w) w = k3;
    printf("%d\n",w);
    for(int i=0;i<w;i++)
    {
        printf("%d %d %d\n",b1[i],b2[i],b3[i]);
    }
    }
    else
        printf("0\n");

}
