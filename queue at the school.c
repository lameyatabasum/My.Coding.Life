#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    char a[n];
    scanf("%s",a);
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='B'&&a[i+1]=='G')
                {
                    int h=a[i];
                    a[i]=a[i+1];
                    a[i+1]=h;
                    i++;
                }
        }
    }
    printf("%s",a);
}
