#include<stdio.h>
int main()
{
    int x;
    float y;
    while((scanf("%d%f",&x,&y))!=EOF){
    if((x%5==0)&&(((float)x+0.50)<=y))
        printf("%0.2f\n",(y-(float)x-0.50));
    else
        printf("%0.2f\n",y);
    }
    return 0;
}
