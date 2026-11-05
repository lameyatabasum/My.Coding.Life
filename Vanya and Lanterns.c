#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) {
    double x = *(double*)a;
    double y = *(double*)b;
    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;}
int main()
{
    int n;
    double l;
    scanf("%d %lf",&n,&l);
    double a[n];
    for(int i=0;i<n;i++)
        scanf("%lf",&a[i]);
    qsort(a,n,sizeof(double),cmp);
    double max=a[0];
    for(int i=0;i<n-1;i++)
    {
        double p=(a[i+1]-a[i])/2.0;
        if(p>max)
            max=p;
    }
    double d=l-a[n-1];
    if(d>max)
        max=d;
    printf("%.10lf",max);


}
