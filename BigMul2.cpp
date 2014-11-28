#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main (void)
{
int i=0,k=0;
int tmp1=0, tmp2=0, tmp3=0;
char * a;
a= (char *) malloc(30 * sizeof(char));

char * b;
b= (char *) malloc(30 * sizeof(char));

int * x;
x= (int *) malloc(30 * sizeof(int));

int * y;
y= (int *) malloc(30 * sizeof(int));

int * z;
z= (int *) malloc(61 * sizeof(int));

int * w;
w= (int *) malloc(31 * sizeof(int));

int * v;
v= (int *) malloc(61 * sizeof(int));

int * solution;
solution= (int *) malloc(61 * sizeof(int));


int carry = 0;
int c[61];
int d[61];

int f[61];
int g[61];

printf("\nEnter a number (up to 30 digits in length)> "); scanf("%s", a);

i=0;
while(i < strlen(a)){
c[i] = a[i] - '0';
i++;}
printf("\nThe first number is: ");
for(i=0; i < strlen(a); i++){
printf("%d", c[i]);}
printf("\n");

for(i=0, k = 29; i < strlen(a); i++){
x[k] = c[(strlen(a)-1)-i];
k--;}

printf("\nEnter a second number (up to 30 digits in length)> "); scanf("%s", b);

i=0;
while(i < strlen(b)){
d[i] = b[i] - '0';
i++;}

printf("\nThe second number is: ");
for(i=0; i < strlen(b); i++){
printf("%d", d[i]);}
printf("\n");

for(i=0, k = 29; i < strlen(b); i++){
y[k] = d[(strlen(b)-1)-i];
printf("\nThe sum of the two numbers is: ");

for(k=30; k>=0; k--)
{
w[k] = 0;
}

for (k = 29; k >= 0; k--){
w[k] = x[k] + y[k] + w[k];
if (w[k] >= 10){
w[k] = w[k]%10;
w[k-1] = 1;}
}
for(i= -1; i < 30; i++){
printf("%d", w[i]);}
printf("\n");

for(k = 60; k>=0; k--){
z[k] = 0;
f[k] = 0;
g[k] = 0;
solution[k] = 0;
}
for(k = 0; k < 30; k++){
f[k+31] = x[k];
g[k+31] = y[k];
}

printf("\nThe product of the two numbers is: ");

/*The multiplication algorithm begins here*/

for(i= 60; i >= 0; i--) {
for(k=60; k>=0; k--)
{ tmp1 = f[i] * g[k];
z[k] = tmp3 + z[k-1];
tmp3 = tmp1 % 10;
z[k-1]= tmp1 / 10;
}
}

/*The multiplication algorithm ends here*/

for(i = 0; i < 61; i++){
printf("%d", z[i]);}
printf("\n\n");
}

return(0);
}
