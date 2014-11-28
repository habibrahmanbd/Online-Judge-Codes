#include<stdio.h>
int fib[30];
void f()
{
    int i;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<30;i++)
        fib[i]=fib[i-1]+fib[i-2];
    return ;
}
int main()
{
    f();
    int i,k,j,n,n1,n2,n3,temp,column;
    while(scanf("%d",&n)==1&&n>0)
    {
        column=fib[n]*2+(n-1)*2;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<2;j++)
            {
                temp=column;
                n1=i-1;
                for(k=0;k<n1;k++)
                    printf(".");
                n2=fib[i];
                for(k=0;k<n2;k++)
                    printf("#");
                n3=(temp/2)-n2-n1;
                for(k=0;k<2*n3;k++)
                    printf(".");

                for(k=0;k<n2;k++)
                    printf("#");
                for(k=0;k<n1;k++)
                    printf(".");
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}

