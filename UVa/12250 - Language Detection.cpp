#include<stdio.h>
#include<string.h>
int main()
{
    int Caseno=0;
    char str[14];
    while(++Caseno)
    {
        scanf("%s",str);
        if((strcmp(str,"#"))==0) break;
        else if((strcmp(str,"HELLO"))==0)
        printf("Case %d: ENGLISH\n",Caseno);
        else if((strcmp(str,"HOLA"))==0)
        printf("Case %d: SPANISH\n",Caseno);
        else if((strcmp(str,"HALLO"))==0)
        printf("Case %d: GERMAN\n",Caseno);
        else if((strcmp(str,"BONJOUR"))==0)
        printf("Case %d: FRENCH\n",Caseno);
        else if((strcmp(str,"CIAO"))==0)
        printf("Case %d: ITALIAN\n",Caseno);
        else if((strcmp(str,"ZDRAVSTVUJTE"))==0)
        printf("Case %d: RUSSIAN\n",Caseno);
        else printf("Case %d: UNKNOWN\n",Caseno);
    }
    return 0;
}
