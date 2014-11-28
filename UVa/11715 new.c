#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0;
while(scanf("%d",&n)==1)
{
double a,u,v,s,t;
if(n==0) break;
else if(n==1)
{
scanf("%lf%lf%lf",&u,&v,&t);
s=((u+v)*0.5)*t;
a=(2*(s-u*t))/(t*t);
count++;
printf("Case %d: %.3lf %.3lf\n",count,s,a);
}
else if(n==2)
{
scanf("%lf%lf%lf",&u,&v,&a);
t=(v-u)/a;
s=((u+v)/2)*t;
count++;
printf("Case %d: %.3lf %.3lf\n",count,s,t);
}
else if(n==3)
{
scanf("%lf%lf%lf",&u,&a,&s);
v=sqrt((u*u)+2*a*s);
t=(v-u)/a;
count++;
printf("Case %d: %.3lf %.3lf\n",count,v,t);
}
else if(n==4)
{
scanf("%lf%lf%lf",&v,&a,&s);
u=sqrt((v*v)-2*a*s);
t=(v-u)/a;
count++;
printf("Case %d: %.3lf %.3lf\n",count,u,t);
}

}
return 0;
}
