#include<stdio.h>
int main()
{
    long a,b;
    while((scanf("%ld%ld",&a,&b))==2)
    {
        if(a==0&&b==0) break;
        int temp,pre_carry=0,carry=0,rem_a,rem_b;
        while(a>0||b>0)
        {
            rem_a=a%10;
            a/=10;
            rem_b=b%10;
            b/=10;
            temp=pre_carry+rem_a+rem_b;
            if(temp>=10)
            {
                carry++;
                pre_carry=temp/10;
            }
            else
                pre_carry=0;
        }
        if(carry>0){
                if(carry>1)
            printf("%d carry operations.\n",carry);
            else printf("1 carry operation.\n");
        }
        else
            printf("No carry operation.\n");
    }
    return 0;
}
