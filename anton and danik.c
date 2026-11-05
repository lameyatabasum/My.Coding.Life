#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    int count1=0,count2=0;
    scanf("%s",a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
            count1++;
        else if(a[i]=='D')
            count2++;
    }
    if(count1>count2)
        printf("Anton");
    else if(count1==count2)
        printf("Friendship");
    else
        printf("Danik");

}
