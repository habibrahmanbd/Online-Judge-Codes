#include<stdio.h>
int main()
{
    int a,b,c,temp,tcase;
    scanf("%d",&tcase);
    while(tcase--){
        scanf("%d %d %d",&a,&b,&c);
        c*=2;
        temp=(a<b)?a:b;
        if(temp>=c)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
