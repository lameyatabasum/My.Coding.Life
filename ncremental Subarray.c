#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[m];
        for(int i=0;i<m;i++)
        {
          scanf("%d",&a[i]);
        }
        int flag=1;
        for(int i=1;i<m;i++)
        {
            if(a[i-1]+1!=a[i])
            {
                flag=0;
                printf("1\n");
                break;
            }
        }
        if(flag==1)
        {
            int c=n-a[m-1]+1;
            printf("%d\n",c);
        }
        //if(m>1&&a[0]==1&&a[1]==1)
            //printf("1\n");
    }
}
