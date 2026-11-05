#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s;
        scanf("%d %d",&n,&s);
        int a[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==s)
                count++;
        }
        if(count>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
