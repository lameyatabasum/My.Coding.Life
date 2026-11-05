#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005];
    scanf("%s",a);
    int l=strlen(a);
    int count1=0;
    for(int i=0;i<l-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count1++;
            if(count1>=6)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
            count1=0;

    }
    printf("NO\n");

}
