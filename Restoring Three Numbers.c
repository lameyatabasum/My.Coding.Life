#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)b-*(int*)a);}
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    qsort(a,4,sizeof(int),cmp);
    for(int i=1;i<4;i++)
        printf("%d ",a[0]-a[i]);
}
