#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int drink=(k*l)/(n*nl);
    int lime=(c*d)/n;
    int salt=p/(n*np);
    if(drink<lime&&drink<salt)
        printf("%d",drink);
    else if(lime<drink&&lime<salt)
        printf("%d",lime);
    else
        printf("%d",salt);
}
