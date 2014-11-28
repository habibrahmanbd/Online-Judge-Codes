#include<stdio.h>
int main()
{
    int a,b,c;
    while(c!=0){
        printf("Enter the number: \n");
        scanf("%d%d",&a,&b);
        if(a>b) printf("Calculation: %d > %d\n\n",a,b);
        else if(b>a) printf("Calculation: %d > %d\n\n",b,a);
        else printf("Calculation: %d = %d\n\n",a,b);
    }
    return 0;
}
