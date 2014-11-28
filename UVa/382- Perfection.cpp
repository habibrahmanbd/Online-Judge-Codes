#include<stdio.h>
int main()
{
    int num,i,k;
    printf("PERFECTION OUTPUT\n");
    while((scanf("%d",&num))==1)
    {
        if(num==0)
            break;
        unsigned long long int sum=0;
        for(i=1;i<num;i++)
        {
            if(num%i==0)
                sum+=i;
            if(sum>num)
                break;
        }
        if(sum==num)
            printf("%5d  PERFECT\n",num);
        if(sum<num)
            printf("%5d  DEFICIENT\n",num);
        if(sum>num)
        printf("%5d  ABUNDANT\n",num);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
