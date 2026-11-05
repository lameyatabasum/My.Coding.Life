#include<stdio.h>
int main()
{
    char given[6]="hello";
    char input[101];
    scanf("%s",input);
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
       if(input[i]==given[count])
        count++;
    }
    if(count==5)
        printf("YES");
    else
        printf("NO");
}
