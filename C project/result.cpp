#include<stdio.h>
int main()
{
    float mark,credit,grade,sum=0.0,credit_sum=0.0;
    int n;
    printf("Enter your subject number:\n");
    scanf("%d",&n);
    while(n--)
    {
        printf("Enter subject mark and credit:\n");
        scanf("%f%f",&mark,&credit);
        if(mark>=80){
            grade=4.00;
            credit_sum+=credit;
            sum+=4.00*credit;
        }
        else if(mark>=75 && mark<80){
            grade=3.75;
            credit_sum+=credit;
            sum+=3.75*credit;
        }
        else if(mark>=70 && mark<75){
            grade=3.50;
            credit_sum+=credit;
            sum+=3.50*credit;
        }
        else if(mark>=65 && mark<70){
           grade=3.25;
            credit_sum+=credit;
            sum+=3.25*credit;
        }
        else if(mark>=60 && mark<65){
            grade=3.00;
            credit_sum+=credit;
            sum+=3.00*credit;
        }
        else if(mark>=55 && mark<60){
            grade=2.75;
            credit_sum+=credit;
            sum+=2.75*credit;
        }
        else if(mark>=50 && mark<55){
           grade=2.50;
            credit_sum+=credit;
            sum+=2.50*credit;
        }
        else if(mark>=45 && mark<50){
            grade=2.25;
            credit_sum+=credit;
            sum+=2.25*credit;
        }
        else if(mark>=40 && mark<45){
            grade=2.00;
            credit_sum+=credit;
            sum+=2.00*credit;
        }
        else{
            grade=0.00;
            credit_sum+=credit;
            sum+=0.00*credit;
        }
    }
    printf("Your CGPA: %0.2f\n",sum/credit_sum);
    return 0;
}
