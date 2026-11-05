#include<stdio.h>
#include<string.h>
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    char m[100005];
    scanf("%s",m);
    int l=strlen(m);
    int s=0;
    for(int i=0;i<l;i++)
    {
        int p=m[i]-'0';
        s=s+a[p-1];
    }
    printf("%d",s);
}
