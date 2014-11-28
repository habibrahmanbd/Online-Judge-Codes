#include<stdio.h>
int main()
{
    double c, d, t,f,x,y;int i=1;
    scanf("%lf",&t);
    while(i<=t){
        scanf("%lf%lf",&c,&d);
        f=((9.0/5.0)*c)+32.0;
        x=f+d;
        y=(x-32.0)*(5.0/9.0);
        printf("Case %d: %0.2lf\n",i,y);
        i++;
    }
    return 0;
}
