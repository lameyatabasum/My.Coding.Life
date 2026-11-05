#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char a[n][m+1];
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    int x,y;
    scanf("%d%d",&x,&y);
    x=x-1;
    y=y-1;
    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};
    int nx=0,ny=0;
    for(int i=0;i<8;i++)
    {
        nx=x+dx[i];
        ny=y+dy[i];
        if(ny>=0&&ny<m&&nx>=0&&nx<n)
        {
            if(a[nx][ny]!='x')
            {
                printf("no");
                return 0;
            }

        }
    }
    printf("yes");
}
