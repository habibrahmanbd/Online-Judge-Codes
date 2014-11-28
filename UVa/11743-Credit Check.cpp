#include<stdio.h>
#include<string.h>
int main()
{
    long long i,test,len;
    char str[25];
    scanf("%lld",&test);
    while(test--)
    {
        scanf("\n");
        gets(str);
        int a[16],j=0;
        len=strlen(str);
        for(i=0;i<len;i++)
            if(str[i]!=' ')
            a[j++]=str[i]-'0';
        int sum=0,sum_an=0,temp;
        for(i=0;i<j;i++)
        {
            if(i%2==0)
            {
                temp=(a[i]*2);
                if(temp>9)
                {
                    while(temp>0)
                    {
                        sum_an+=temp%10;
                        temp/=10;
                    }
                }
                else
                    sum_an+=temp;
            }
            else
                sum+=a[i];
        }
        temp=(sum+sum_an)%10;
        if(temp==0)
            printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
