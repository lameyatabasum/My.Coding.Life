#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        char a[k+1];
        char b[n+1];
        int freq[51]={0};;
        scanf("%s",a);
        for(int i=0;a[i]!='\0';i++)
            freq[(unsigned char)a[i]]++;
        int o=freq[48];
        int o1=freq[49];
        int o2=freq[50];
        for(int i=0;i<o;i++)
        {
            b[i]=='-';
        }
        for(int i=o1-1;i>o2;i--)
            b[i]=='-';



    }
}
