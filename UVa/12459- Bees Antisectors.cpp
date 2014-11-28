#include<stdio.h>
int main()
{
    unsigned long long prev, pres,temp,count,num;
    while(scanf("%lld",&num))
    {
        if(num==0) break;
        count=1;
        while(count<=num)
        {
            if(count==1)
            {
                pres=1;
                temp=1;
                prev=1;
            }
            else{
            pres=prev+temp;
            prev=temp;
            temp=pres;
            }
         count++;
        }
        printf("%lld\n",pres);
    }
    return 0;
}
