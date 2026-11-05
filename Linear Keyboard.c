#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[27],b[51],temp[2];
        scanf("%s %s",a,b);
        int l=strlen(b);
        int s=0;
        for(int i=0;i<l-1;i++)
        {
            temp[0]=b[i];
            temp[1]='\0';
            int x1=strcspn(a,temp);
            temp[0]=b[i+1];
            temp[1]='\0';
            int x2=strcspn(a,temp);
            s=s+abs(x1-x2);
        }
        printf("%d\n",s);

    }
}

