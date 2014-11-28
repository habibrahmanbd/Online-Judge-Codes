#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int i=0,c, j,m,n,d,f;
    while(i<=200){
            scanf("%d%d",&m,&n);
            if(m==0 && n==0) break;
    j=m;
    c=0;
    while(j<=n){

        d=(float)sqrt(j);
        f=(float)d*d;
        if(f==j)
            c++;
        j++;
    }
    printf("%d\n",c);
    i++;
    }
    return 0;
}
