#include<stdio.h>
int main()
{
    int data;
    while(scanf("%d",&data)){
        if(data==42) break;
        printf("%d\n",data);
    }
    return 0;
}
