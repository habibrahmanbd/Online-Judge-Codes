#include <stdio.h>
int main()

{
int i,t,j,a,b,min,c,reach,arri,m,n,o,curr;
char ch;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&a);
scanf("%d%c%d",&b,&ch,&c);
curr=b*60+c;
min=1000000;
for( i=1;i<=a;i++)
{
scanf("%d%c%d %d",&m,&ch,&n,&o);
arri=m*60+n;
if(arri<curr) arri+=1440;
reach=arri+o;
if(reach-curr<min) min=reach-curr;
}
printf("Case %d: %d\n",j,min);
}
return 0;
}
