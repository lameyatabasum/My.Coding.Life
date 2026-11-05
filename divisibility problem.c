#include <stdio.h>

int main()
 {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long x,y;
        scanf("%lld %lld", &x, &y);

        long long r= x % y;
        if(r == 0)
            printf("0\n");
        else
            printf("%lld\n",y-r);
    }
    return 0;
}
