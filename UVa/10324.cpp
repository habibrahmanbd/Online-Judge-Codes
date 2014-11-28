#include<stdio.h>
int main()
{
    char str[1000000];
    int t,i,j,temp;
    scanf("%s",str);
    int test_case=1;
    while((scanf("%d",&t))!=EOF)
    {
    printf("Case %d:\n",test_case++);
    while(t--)
    {
        scanf("%d%d",&i,&j);
        if(i>j)
        {
            temp=j;
            j=i;
            i=temp;
        }
        int count=0;
        while(i++<=j)
        {
           if(str[i+1]!=str[i])
            break;
        }
        if(i==j)
            printf("Yes\n");
        else
            printf("No\n");
    }
    }
    return 0;
}
