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
    int s=a[0];
    for(int i=1;i<n;i++)
    {
       if(a[i]<s)
         s=a[i];

    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
            count++;
    }
    if(count%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
}
