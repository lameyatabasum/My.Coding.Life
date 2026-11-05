#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    char s[3]="A[";
    char p[2]="]";
    char q[2]="=";
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10)
        {
            printf("%s%d%s %s %d\n",s,i,p,q,a[i]);
        }
    }
}
