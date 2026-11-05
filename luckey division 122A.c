#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int frequency[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int flag=0;
    for(int i=0;i<14;i++)
    {
        if(a%frequency[i]==0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }

        if(flag==1)
        {

            printf("YES\n");
            return 0;
        }
    }
    if(flag==0)
        printf("NO\n");


}
