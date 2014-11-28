#include<stdio.h>
#include<string.h>
int main()
{
char l[200];
int i,n,k,len;
while(gets(l)){
len=strlen(l);
for(i=0;i<len;i++){
if(l[i]==92) printf("%c",93);
else if(l[i]==93) printf("%c",91);
else if(l[i]==91) printf("P");
else if(l[i]=='P') printf("O");
else if(l[i]=='O') printf("I");
else if(l[i]=='I') printf("U");
else if(l[i]=='U') printf("Y");
else if(l[i]=='Y') printf("T");
else if(l[i]=='T') printf("R");
else if(l[i]=='R') printf("E");
else if(l[i]=='E') printf("W");
else if(l[i]=='W') printf("Q");
else if(l[i]==39) printf(";");
else if(l[i]==';') printf("L");
else if(l[i]=='L') printf("K");
else if(l[i]=='K') printf("J");
else if(l[i]=='J') printf("H");
else if(l[i]=='H') printf("G");
else if(l[i]=='G') printf("F");
else if(l[i]=='F') printf("D");
else if(l[i]=='D') printf("S");
else if(l[i]=='S') printf("A");
else if(l[i]=='/') printf(".");
else if(l[i]=='.') printf(",");
else if(l[i]==',') printf("M");
else if(l[i]=='M') printf("N");
else if(l[i]=='N') printf("B");
else if(l[i]=='B') printf("V");
else if(l[i]=='V') printf("C");
else if(l[i]=='C') printf("X");
else if(l[i]=='X') printf("Z");
else if(l[i]=='=') printf("-");
else if(l[i]=='-') printf("0");
else if(l[i]=='0') printf("9");
else if(l[i]=='9') printf("8");
else if(l[i]=='8') printf("7");
else if(l[i]=='7') printf("6");
else if(l[i]=='6') printf("5");
else if(l[i]=='5') printf("4");
else if(l[i]=='4') printf("3");
else if(l[i]=='3') printf("2");
else if(l[i]=='2') printf("1");
else if(l[i]=='1') printf("`");
else printf("%c",l[i]);
}
printf("\n");
}
return 0;
}
