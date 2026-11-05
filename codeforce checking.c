#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a;
        scanf(" %c",&a);
        if(a=='c'||a=='o'||a=='d'||a=='e'||a=='f'||a=='r'||a=='s')
            printf("YES\n");
        else
            printf("NO\n");
    }
}
