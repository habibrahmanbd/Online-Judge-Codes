#include<stdio.h>
#include<math.h>
int main()
{
    long int t;
    int i,j,n=0;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%d%d",&i,&j);
        printf("Case %d: %0.0f\n",++n,ceil((float)((i*j)/2)));
    }
    return 0;

}
/*not solved*/
