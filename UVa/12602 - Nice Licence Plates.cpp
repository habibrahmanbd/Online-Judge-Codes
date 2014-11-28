#include<stdio.h>
#include<math.h>
int main()
{
    int test,num,a,b,c,temp,i;
    char str[8];
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%s",str);
        a=str[0]-65;
        b=str[1]-65;
        c=str[2]-65;
        temp=a*pow(26,2)+b*pow(26,1)+c;
        num=((str[4]-48)*1000)+((str[5]-48)*100)+((str[6]-48)*10)+((str[7]-48));
        num=(temp-num);
        if(num<0) num*=-1;
        if(num<=100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
