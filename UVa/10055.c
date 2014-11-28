#include<stdio.h>
int main()
{
   long int a,b,c,i;
   while(scanf("%ld %ld",&a,&b)==2)
         {
             if(a<b) printf("%ld\n",b-a);
             else printf("%ld\n",a-b);
         }

    return 0;
}
