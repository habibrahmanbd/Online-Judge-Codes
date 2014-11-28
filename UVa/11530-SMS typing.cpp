#include<stdio.h>
#include<string.h>
int main()
{
    int count,len,i,test,j;
    char str[100];
    scanf("%d\n",&test);
    for(i=1;i<=test;i++)
    {
        gets(str);
        count=0;
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            if(str[j]=='a'||str[j]=='d'||str[j]=='g'||str[j]=='j'||str[j]=='m'||str[j]=='p'||str[j]=='t'||str[j]=='w'||str[j]==' ')
                count+=1;
            else if(str[j]=='b'||str[j]=='e'||str[j]=='h'||str[j]=='k'||str[j]=='n'||str[j]=='q'||str[j]=='u'||str[j]=='x')
                count+=2;
            else if(str[j]=='c'||str[j]=='f'||str[j]=='i'||str[j]=='l'||str[j]=='o'||str[j]=='r'||str[j]=='v'||str[j]=='y')
                count+=3;
            else if(str[j]=='s'||str[j]=='z')
                count+=4;
        }
        printf("Case #%d: %d\n",i,count);
    }
    return 0;
}
//simple wrong....
