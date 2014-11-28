#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;char str[6];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",str);
         if (strlen(str) > 3)
                printf("3\n");
                else {
                        if(str[0] == 'o' && str[1] == 'n' && str[2] == 'e') printf("1\n");
                        else if(str[0] == 'o' && str[1] == 'n') printf("1\n");
                        else if(str[0] == 'o' && str[2] == 'e') printf("1\n");
                        else if(str[1] == 'n' && str[2] == 'e') printf("1\n");
                        else if(str[0] == 't' && str[1] == 'w' && str[2] == 'o') printf("2\n");
                        else if(str[0] == 't' && str[1] == 'w') printf("2\n");
                        else if(str[0] == 't' && str[2] == 'o') printf("2\n");
                        else if(str[1] == 'w' && str[2] == 'o') printf("2\n");
                }
    }
    return 0;
}
