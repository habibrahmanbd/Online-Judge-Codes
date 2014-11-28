#include<stdio.h>
int main()
{
    int p_count=0,n_count=0,num,test,c=0;
    scanf("%d",&test);
    while(c<test)
    {   scanf("%d",&num);
        if(num<0) n_count++;
        if(num>0) p_count++;
        c++;
    }
    printf("%d %d",p_count,n_count);
    return 0;
}
