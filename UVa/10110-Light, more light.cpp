#include<stdio.h>
#include<math.h>
int main()
{
long n,a,b;
while(scanf("%ld",&n))
{
if(n==0)
break;
a=sqrt(n);
b=a*a;
if(b==n)
printf("yes\n");
else
printf("no\n");
}
return 0;
}
