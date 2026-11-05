#include<stdio.h>
int main()
{
    int n,j,f=0,g=0,a[100],e=0,o=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            e++;
            f=j;}
        else if(a[j]!=0)
        {
            o++;
            g=j;}
    }
    if(e>o)
        printf("%d",g+1);
    else if(o>e)
        printf("%d",f+1);

}

