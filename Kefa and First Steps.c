#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,in;
    int count=1;
    int l=1;
    scanf("%d",&in);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(in<=a)
        {

            count++;
        }
        else
        {
            if(count>=l)
            l=count;
            count=1;
        }
        in=a;
    }
    if(count>=l)
        {
            l=count;
        }

    /*for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
        }
        else if(count>l)
        {
            l=count;
            count=1;
        }
    }*/
      printf("%d\n",l);

}
