#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct football
{
    char team[11];
    int count;
};
int compare(const void*a,const void*b)
 {
    struct football *x =(struct football*)a;
    struct football*y =(struct football*)b;
    return y->count - x->count;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct football string[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",string[i].team);
        string[i].count=1;
    }
    for(int i=0;i<n;i++)
    {
        if(string[i].count==0)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(string[i].team,string[j].team)==0)
            {
                string[i].count++;
                string[j].count=0;
            }
        }
    }
    qsort(string,n,sizeof(struct football),compare);
    printf("%s",string[0].team);

}
