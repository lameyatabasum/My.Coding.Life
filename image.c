#include<stdio.h>
#include<string.h>
void meow()
{
    char a[3],b[3];
    scanf("%s%s",a,b);
    int c[256] = {0},count = 0;
    for (int i = 0;a[i]!=0; i++)
    {
        if (c[a[i]]==0)
        {
            c[a[i]]++;
            count++;
        }
    }
    for (int i = 0;b[i]!=0; i++)
    {
        if (c[b[i]]==0)
        {
            c[b[i]]++;
            count++;
        }
    }
    printf("%d\n",count - 1);
}
int main()
{
    int t;scanf("%d",&t);
    while (t--)
    {
        meow();
    }

}
