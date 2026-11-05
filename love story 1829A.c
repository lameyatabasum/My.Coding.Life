#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char b[11]="codeforces", a[11];
    for(int i=0;i<t;i++)
    {
        int count=0;
        scanf("%s",a);
        for(int i=0;i<10;i++)
        {
            if(a[i]!=b[i])
            {
                count++;
            }

        }
        printf("%d\n",count);

    }


}
