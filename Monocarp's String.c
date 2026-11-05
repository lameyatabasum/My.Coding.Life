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
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
                a++;
            else
               b++;
        }
        if(a==b)
            printf("0\n");
        else if(a==0||b==0)
            printf("-1\n");
        else
        {
            int dif=a-b;
            int flag=0;
            int minlen=n+1;
            for(int i=0;i<n&&!flag;i++)
            {
                int sum=0;
                for(int j=i;j<n;j++)
                {

                        if(s[j]=='a')
                            sum++;
                        else
                            sum--;
                    if(sum==dif)
                    {
                       int temp=j-i+1;
                       if(temp<minlen)
                        minlen=temp;
                       flag=1;
                    }
                }
            }
            if(flag)
            {
                if(minlen==n)
                    printf("-1\n");
                else
                    printf("%d\n",minlen);
            }

            else
                printf("-1\n");

        }


    }
}
