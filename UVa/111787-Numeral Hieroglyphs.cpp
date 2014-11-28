#include <stdio.h>
#include <string.h>
int ar[10000];
int main()
{
    char input[1000];
    int test,i,j,k;
    int B,U,S,P,F,T,M,flag,a,b,temp,ascend,descend;
    unsigned long long int sum,count;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        B=0;
        U=0;
        S=0;
        P=0;
        F=0;
        T=0;
        M=0;
        flag=1;
     scanf("%s",&input);
     for(j=0;j<strlen(input);j++){
        if(input[j]=='B'){
         B++;
         ar[j]=1;
        }
        else if(input[j]=='U'){
         U++;
         ar[j]=2;
        }
        else if(input[j]=='S'){
         S++;
         ar[j]=3;
        }
        else if(input[j]=='P'){
         P++;
         ar[j]=4;
        }
        else if(input[j]=='F'){
        F++;
        ar[j]=5;
        }
        else if(input[j]=='T'){
         T++;
         ar[j]=6;
        }
        else if(input[j]=='M'){
         M++;
         ar[j]=7;
        }
     }
     if(B>9||U>9||S>9||P>9||F>9||T>9||M>9){
       flag=0;
     }
     else {
         ascend=1;
       for(a=1;a<strlen(input);++a){
         for(b=strlen(input)-1;b>=a;--b){
         if(ar[b-1]>ar[b]){
           ascend=0;
           break;
         }
         }
       }
       descend=1;
     for(a=1;a<strlen(input);++a){
         for(b=strlen(input)-1;b>=a;--b){
         if(ar[b-1]<ar[b]){
           descend=0;
           break;
         }
         }
       }
       if(ascend==0&&descend==0){
           flag=0;
       }
       else {
           sum=0;
          for(j=0;j<strlen(input);j++){
            if(input[j]=='B')sum=sum+1;
            else if(input[j]=='U')sum=sum+10;
            else if(input[j]=='S')sum=sum+100;
            else if(input[j]=='P')sum=sum+1000;
            else if(input[j]=='F')sum=sum+10000;
            else if(input[j]=='T')sum=sum+100000;
            else if(input[j]=='M')sum=sum+1000000;
          }
       }
     }
     if(flag==0)printf("error\n");
     else if(flag)printf("%llu\n",sum);
    }
    return 0;
}
//not submitted yed, but solved!!!
