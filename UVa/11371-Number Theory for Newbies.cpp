#include<stdio.h>
int main()
{
    long long num,rev_num,temp,a;
    while((scanf("%lld",&num))==1)
    {
        temp=num;
        rev_num=0;
        int rem;
        while(temp>0)
        {
            rem=temp%10;
            temp/=10;
            rev_num=rev_num*10+rem;
        }
        if(rev_num>=num){
            a=rev_num-num;
            printf("%lld - %lld = %lld = 9 * %lld\n",rev_num,num,a,a/9);
        }
        else{
            a=num-rev_num;
            printf("%lld - %lld = %lld = 9 * %lld\n",num,rev_num,a,a/9);
        }
    }
    return 0;
}
//not solved...
