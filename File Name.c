#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    int count=0;
    for(int i=0;i<n-2;i++)
        if(a[i]=='x'&&a[i+1]=='x'&&a[i+2]=='x')
            count++;

    printf("%d",count);
}
