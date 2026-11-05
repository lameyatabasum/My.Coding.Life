#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[9][9];
    while(t--)
    {
       char c[100];
       int k=0;
     for(int i=0;i<8;i++)
     {
        for(int j=0;j<8;j++)
        {
            scanf(" %c",&a[i][j]);
            if('a'<=a[i][j]&&a[i][j]<='z')
            {
                c[k]=a[i][j];
                k++;
            }
        }
        printf("\n");
     }
     c[k]='\0';
     printf("%s\n",c);
    }

}
