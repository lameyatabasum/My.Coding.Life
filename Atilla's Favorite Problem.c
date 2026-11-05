#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    char mx='a';
    //printf("%d\n",mx);
    for(int i=0;i<n;i++)
    {
        if(s[i]>mx)
            mx=s[i];
    }
    printf("%d\n",mx-96);
    }
}
