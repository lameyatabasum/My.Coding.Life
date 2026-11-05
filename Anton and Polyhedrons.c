#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n--)
    {
    char a[20];
    scanf("%s",a);
    if(strcmp(a,"Tetrahedron")==0)
        sum=sum+4;
    else if(strcmp(a,"Cube")==0)
        sum=sum+6;
    else if(strcmp(a,"Octahedron")==0)
        sum=sum+8;
    else if(strcmp(a,"Dodecahedron")==0)
        sum=sum+12;
    else if(strcmp(a,"Icosahedron")==0)
        sum=sum+20;
    }
    printf("%d",sum);
}
