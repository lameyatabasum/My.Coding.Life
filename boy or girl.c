#include<stdio.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int count=0;
    int freq[256]={0};
    for(int i=0;a[i]!='\0';i++)
    {
        freq[a[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
            count++;

    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
