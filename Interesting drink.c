#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)a-*(int*)b);}
int searchshop(int a[],int n,int target)
{
   int b=0,e=n-1;
   int ans=-1;
   while(b<=e)
   {
       int mid=b+(e-b)/2;
       if(a[mid]<=target)
       {
           ans=mid;
           b=mid+1;
       }
       else
        e=mid-1;
   }
   return ans+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int k;
        scanf("%d",&k);
        int result=searchshop(a,n,k);
        printf("%d\n",result);


    }


}
