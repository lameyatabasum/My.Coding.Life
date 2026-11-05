#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d",&n);
    int a[105];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    if(s>0)
        printf("HARD\n");
    else
        printf("EASY\n");
}
