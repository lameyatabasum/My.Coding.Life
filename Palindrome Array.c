#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==a[n-1-i])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("NO");
    else
        printf("YES");
}
