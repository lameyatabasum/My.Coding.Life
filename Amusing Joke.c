#include<stdio.h>
#include<string.h>
int main()
{
    char guest[101],host[101],pile[101];
    scanf("%s%s%s",guest,host,pile);
    strcat(guest,host);
    int freq1[256]={0};
    int freq2[256]={0};
    for(int i=0;guest[i]!='\0';i++)
    {
        freq1[(int)guest[i]]++;

    }
    for(int i=0;pile[i]!='\0';i++)
    {
        freq2[(int)pile[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i])
        {
           printf("NO\n");
           return 0;
        }
    }
    printf("YES\n");
    return 0;

}
