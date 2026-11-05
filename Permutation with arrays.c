#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)b-*(int*)a);}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    qsort(a,n,sizeof(int),cmp);
    qsort(b,n,sizeof(int),cmp);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("no");
    else
        printf("yes");

}
