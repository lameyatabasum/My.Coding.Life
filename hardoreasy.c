#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[101];
    scanf("%s",&a);
    for(int i=0;i<=n;i++)
    {
        if(a[i]=='1')
        {

            printf("Hard");
            return 0;

        }

    }
     printf("Easy");
     return 0;
}
