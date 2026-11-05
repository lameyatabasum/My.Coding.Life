#include<stdio.h>
int num(int k,int l,int m,int n)
{
    int s=k;
    if(s>l)
        s=l;
    if(s>m)
        s=m;
    if(s>n)
        s=n;
   return s+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[10][10];
        int sum=0;
        for(int i=0;i<10;i++)
        {
            scanf("%s",a[i]);

        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
            if(a[i][j]=='X')
            {
                sum+=num(i,9-i,j,9-j);
            }
            }
        }
        printf("%d\n",sum);

    }
}
