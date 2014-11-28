#include<stdio.h>
int main()
{
    unsigned long rev(unsigned long temp);
    unsigned long test;
    scanf("%lu",&test);
    while(test--)
    {
        unsigned long k=0,num;
        scanf("%lu",&num);
        while(num!=rev(num))
        {
            num=num+rev(num);
            k++;
        }
        printf("%lu %lu\n",k,num);
    }
    return 0;
}
unsigned long rev(unsigned long temp)
{
    unsigned long sum=0,rem;
    while(temp!=0)
        {
            rem=temp%10;
            temp/=10;
            sum=sum*10+rem;
        }
    return sum;
}
