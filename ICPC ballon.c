#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s=0;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int freq[128]={0};
        for(int i=0;a[i]!='\0';i++)
        {
            freq[(unsigned char)a[i]]++;
        }
        for(int i=65;i<=90;i++)
        {
            if(freq[i]>1)
               s=s+2+(freq[i]-1); /*if(freq[i]>0){count++};s=n+count*/

            else if(freq[i]==1)
                s=s+2;
        }
        printf("%d\n",s);

    }
}
