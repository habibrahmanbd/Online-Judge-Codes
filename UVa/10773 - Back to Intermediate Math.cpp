#include<stdio.h>
#include<math.h>
int main()
{
    int test,caseno=1;
    float d,v,u,p,k,t;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%f%f%f",&d,&v,&u);
        if(d==0 || v==0 || u<=v)
	 			printf("Case %d: can't determine\n",caseno++);
        else{
            p=d*((1.0/sqrt(((u*u)-(v*v))))-(1.0/u));
            printf("Case %d: %0.3f\n",caseno++,p);
        }
    }
    return 0;

}
