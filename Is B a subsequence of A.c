#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long long a[n];
    long long b[m];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%lld",&b[i]);
    int i=0;
        for(int j=0;j<n&&i<m;j++)
        {
            if(b[i]==a[j])
            {
                i++;
            }
        }
    if(i==m)
        printf("YES");
    else
        printf("NO");
}
