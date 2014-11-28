#include<stdio.h>
int main()
{
    long n,k,count=0,t,data;
    scanf("%ld %ld",&t,&k);
    while(t--)
    {
        scanf("%ld",&data);
        if(data%k==0)
            count++;
    }
    printf("%ld",count);
    return 0;
}
