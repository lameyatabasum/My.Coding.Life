#include<stdio.h>
int distinctyear(int n)
{
    int a,b,c,d;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        n=n/10;
    }
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        return 1;
    else
        return 0;
}
int main()
{
    int year;
    scanf("%d",&year);
    year++;
    while(!distinctyear(year))
    {
        year++;
    }
    printf("%d\n",year);

    return 0;

}
