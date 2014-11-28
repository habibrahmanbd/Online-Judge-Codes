#include <stdio.h>
long int absoluto(long int);
int main()
{
    long int a,b,c;
    unsigned int i,t;
    char *tithu;

    scanf( "%u", &t);
    for(i = 1; i <= t; i++)
    {
        scanf( "%ld %ld %ld", &a, &b, &c);
        if(a>0&&b>0&&c>0&&(absoluto(b-c)<a)&&(a<(b+c)))
        {
            if(a==b&&b==c)
                tithu="Equilateral";
            else if(a==b||a==c||b==c)
                tithu = "Isosceles";
            else
                tithu= "Scalene";
        }
        else
            tithu= "Invalid";

        printf("Case %u: %s\n", i,tithu);
    }

    return 0;
}

long int absoluto(long int n)
{
    if(n< 0)
        return (-1 * n);

    return n;
}
