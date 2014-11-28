#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int test,length;
    double wide,red_area,green_area,redious;
    scanf("%d",&test);
    if(test<=100)
    {
        while(test--)
        {
        scanf("%d",&length);
        if(length<=1000)
        {
            wide=(3*length)/5;
            redious=length/5;
            red_area=PI*redious*redious;
            green_area=(length*wide)-red_area;
            printf("%0.2lf %0.2lf\n",red_area,green_area);
        }
       }
    }
    return 0;
}
