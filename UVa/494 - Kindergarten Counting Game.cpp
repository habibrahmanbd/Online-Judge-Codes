#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[2000];

    while (gets(str)) {

        int count=0;
        int length = strlen (str);
        int i = 0;

        while ( i < length) {
            while ( !isalpha (str[i]) )
                i++;
            if ( i < length)
                count++;
            while ( isalpha (str[i]) )
                i++;
        }
        printf("%d\n",count);

    }
    return 0;
}
