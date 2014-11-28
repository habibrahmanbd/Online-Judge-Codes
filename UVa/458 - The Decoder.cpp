#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    while(gets(ch)){
    int i=0;
    while(ch[i])
    {
        printf("%c",ch[i++]-7);
    }
    printf("\n");
}
    return 0;
}
