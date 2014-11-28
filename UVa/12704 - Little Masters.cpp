#include<stdio.h>
#include<math.h>
int main()
{
    int test,a,b,radious;
    float temp,short_boundary, long_boundary;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d",&a,&b,&radious);
        temp=(float)sqrt(pow(-a,2)+pow(-b,2));
        short_boundary=(float)radious-temp;
        long_boundary=(float)radious+temp;
        printf("%0.2f %0.2f\n",short_boundary,long_boundary);
    }
    return 0;
}
