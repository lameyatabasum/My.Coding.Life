#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000000];
        scanf("%s",a);
        int index=0,flag=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='C')
            {
                index=i;
                flag=1;
            }
        }
        //printf("%d",index);
        if(flag==1)
        {
            if(isdigit(a[index-1]))
            {
                 int place = 1;
                 int temp=0;
            for(int i = strlen(a)-1; i>index; i--)
            {
                if(!isdigit(a[i])) break;

                temp += (a[i] - '0') * place;
                place *= 10;
            }
                char ans[1000000];
                int k=0;
                while (temp > 0)
                {
                  temp--;
                  char letter ='A'+(temp % 26);
                  ans[k]=letter;
                  temp/=26;
                  k++;
                }
                ans[k]='\0';
                for(int i=k-1;i>=0;i--)
                    printf("%c",ans[i]);
                for(int i=1;i<index;i++)
                    printf("%c",a[i]);

             printf("\n");

            }
            else
            {
                int len = strlen(a);


         int end = len - 1;
          while(end >= 0 && isdigit(a[end])) end--;
              int place=1;
                int sum=0;
                for(int i=end;i>=0;i++)
                {
                        int num=a[i]-'A'+1;
                        sum+=num*place;
                        place*=26;

                }
                printf("R");
                printf("%d",sum);
                printf("C");
                for(int i=0;i<strlen(a);i++)
                {
                    if(isdigit(a[i]))
                        printf("%c",a[i]);
                }
                printf("\n");
            }
        }
        else if(!isdigit(a[index-1]))
        {
            int len = strlen(a);


         int end = len - 1;
          while(end >= 0 && isdigit(a[end])) end--;
              int place=1;
                int sum=0;
                for(int i=end;i>=0;i++)
                {
                    if(!isdigit(a[i]))
                    {
                        int num=a[i]-'A'+1;
                        sum+=num*place;
                        place*=26;
                    }
                }
                printf("R");
                printf("%d",sum);
                printf("C");
                for(int i=0;i<strlen(a);i++)
                {
                    if(isdigit(a[i]))
                        printf("%c",a[i]);
                }
                printf("\n");
            }
        }
    }

