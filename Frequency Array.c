#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m];
    int freq[n+1];
    for(int i=1;i<=n;i++)
        freq[i]=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",freq[i]);
}
