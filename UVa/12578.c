#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    double t,l,w,r,i=0,ar,arc;
    scanf("%lf",&t);
    while(i<t){
        scanf("%lf",&l);
        w=0.6*l;
        r=l/5;
        ar=pi*r*r;
        arc=(l*w)-ar;
        printf("%0.2lf %0.2lf\n",ar,arc);
        i++;
    }
    return 0;
}
