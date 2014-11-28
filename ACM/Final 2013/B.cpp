#include<stdio.h>

int main()
{
    int cases, caseno, a, b, c, d;

    scanf("%d", &cases);
    for(caseno = 1; caseno <= cases; caseno++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("Case %d: ", caseno);
        if(a<=(b+c+d)&&b<=(a+c+d)&&d<=(a+b+c)&&c<=(a+b+d))
            printf("Okay\n");
        else
            printf("Not Okay\n");
    }

    return 0;
}
