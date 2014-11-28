#include<stdio.h>
int main()
{
    long n;
    int a[1001];
    while((scanf("%ld",&n))==1)
    {
        if(n<0) break;
        if(n==0) printf("0\n");
        else{
        int i=0,j,sum=0;
        while(n>0)
        {
            a[i]=n%3;
            n/=3;
            i++;
        }
        for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
        printf("\n");
       }
    }
    return 0;
}
