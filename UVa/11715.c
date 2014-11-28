#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    while(scanf("%d",&n)==1)
    {
    double a,u,v,s,t;
    if(n==0) break;
    switch(n){
    case 1:
        scanf("%lf%lf%lf",&u,&v,&t);
        a=(v-u)/t;
        s=(u*t)+(0.5*a*t*t);
        count++;
        printf("Case %d: %.3lf %.3lf\n",count,s,a);
        break;
    case 2:
        scanf("%lf%lf%lf",&u,&v,&a);
        t=(v-u)/a;
        s=(u*t)+(0.5*a*t*t);
        count++;
        printf("Case %d: %.3lf %.3lf\n",count,s,t);
        break;
    case 3:
        scanf("%lf%lf%lf",&u,&a,&s);
        v=sqrt((u*u)+2*a*s);
        t=(v-u)/a;
        count++;
        printf("Case %d: %.3lf %.3lf\n",count,v,t);
        break;
    case 4:
        scanf("%lf%lf%lf",&v,&a,&s);
        u=sqrt((v*v)-2*a*s);
        t=(v-u)/a;
        count++;
        printf("Case %d: %.3lf %.3lf\n",count,u,t);
        break;
}
}
return 0;
}

