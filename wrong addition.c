#include<stdio.h>
#include<string.h>
int main()
{
    char a[19];
    char b[19];
    int m[18];
    int k=0;
    scanf("%s %s",a,b);
    int la=strlen(a);
    int lb=strlen(b);
    for(int i=la-1,j=lb-1;i>=0,j>=0;i--,j--)
    {
        int c=a[i]-'0';
        int d=b[j]-'0';
        int e=b[j+1]-'0';
        int f=b[j+2]-'0';
        if(b<a)
        {
           m[k]=d;
           m[k+1]= e+f;
           k++;
           j--;
        }
        else
            m[k]=b[j];

    }
    for(int i=0;i<5;i++)
        printf("%d",m[i]);

}
