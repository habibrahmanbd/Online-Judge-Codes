#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    level:
    while(scanf("%d",&n))
    {
        if(n<=0) break;
        i=0;
        while(++i<=n)
        {
            j=0;
            while(++j<=n)
            {
                if(j*j*j-i*i*i==n){
                    printf("%d %d\n",j,i);
                goto level;
                }
            }
        }
        if((j*j*j-i*i*i)!=n)
            printf("No solution\n");
    }
    return 0;
}
