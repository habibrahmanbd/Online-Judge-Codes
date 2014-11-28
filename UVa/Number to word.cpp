#include<stdio.h>

/*Main Function*/
/*******************************************/
int main()
{
    int thou(int num);
int num,rem,loc;
printf("Enter number(0 to 10000 and negative to terminate ) :\n");
while(1<2)
{
scanf("%d",&num);
if(num<0) break;
if(num==0) printf("Zero");
if(num<10000){
thou(num);
}
if(num==10000)
printf("Ten thousand");
if(num>10000) printf("Not in database!!!\a");
printf("\n\n");
}
return 0;
}

/*Function for print one(1) to ninteen(19) */
/*************************************************/
int word_1(int num)
{
num=num%20;
switch(num)
{
case 1: printf("one"); break;
case 2: printf("two"); break;
case 3: printf("three"); break;
case 4: printf("four");break;
case 5: printf("five"); break;
case 6: printf("six"); break;
case 7: printf("seven"); break;
case 8: printf("eight"); break;
case 9: printf("nine"); break;
case 10: printf("ten"); break;
case 11: printf("eleven"); break;
case 12: printf("twelve"); break;
case 13: printf("thirteen"); break;
case 14: printf("fourteen"); break;
case 15: printf("fifteen"); break;
case 16: printf("sixteen"); break;
case 17: printf("seventeen"); break;
case 18: printf("eighteen"); break;
case 19: printf("ninteen"); break;
}
}

/*Function for print 20 to 90*/
/***************************************************/
int dec(int num)
{
int word_1(int num);
int rem;
rem=num%10;
num=num/10;
switch(num)
{
case 2:printf("twenty ");
if(rem>0) {word_1(rem);break;}
else break;
case 3:printf("thirty ");
if(rem>0) {word_1(rem);break;}
else break;
case 4:printf("fourty ");
if(rem>0) {word_1(rem);break;}
else break;
case 5:printf("fifty ");
if(rem>0) {word_1(rem);break;}
else break;
case 6:printf("sixty ");
if(rem>0) {word_1(rem);break;}
else break;
case 7:printf("seventy ");
if(rem>0) {word_1(rem);break;}
else break;
case 8:printf("eighty ");
if(rem>0) {word_1(rem);break;}
else break;
case 9:printf("ninty ");
if(rem>0) {word_1(rem);break;}
else break;
default:if(rem>0) {word_1(rem);break;}
else break;
}
}

/*Function for 100 to 900*/
/********************************************/
int hun(int num)
{
int word_1(int num);
int dec(int num);
int rem;
rem=num%100;
num=num/100;
switch(num)
{
case 1: printf("one hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 2:printf("two hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 3:printf("three hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 4:printf("four hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 5:printf("five hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 6:printf("six hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 7:printf("seven hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 8:printf("eight hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 9:printf("nine hundred ");
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
default:
if(rem>19){
dec(rem); break;
}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
}
}

/*Function for print 9,000 to 10,000/*
/***************************************/
int thou(int num)
{
int word_1(int num);
int dec(int num);
int hun(int num);
int rem;
rem=num%1000;
num=num/1000;
switch(num)
{
case 1: printf("one thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 2:printf("two thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 3:printf("three thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 4:printf("four thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 5:printf("five thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 6:printf("six thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 7:printf("seven thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 8:printf("eight thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
case 9:printf("nine thousand ");
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
default:
if(rem>99){hun(rem); break;}
if(rem<100 && rem>19){dec(rem); break;}
if(rem==0) break;
if(rem<=19){ word_1(rem);break;}
}
}
