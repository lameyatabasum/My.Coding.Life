#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            b[i]=sum;
        }
        int s1,s2,s3,flag=0;
        int x=0,y=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s1=b[i];
                s2=b[j]-b[i];
                s3=b[n-1]-b[j];
                if(s1%3==s2%3&&s2%3==s3%3)
                {
                    x=i+1;
                    y=j+1;
                    flag=1;
                    break;
                }
                if (s1 % 3 != s2 % 3 && s2 % 3 != s3 % 3 && s3 % 3 != s1 % 3)
                {
                    x = i+1;
                    y = j+1;
                    flag = 1;
                   break;
               }

            }
            if(flag==1)
                break;
        }
        printf("%d %d\n",x,y);

    }
    return 0;
}
