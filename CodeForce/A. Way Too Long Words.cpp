#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <list>
#include <queue>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <sstream>
#include <bitset>
#include <set>
using namespace std;
int main()
{
    int t;
    char str[101];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(str);
        if(strlen(str)>10)
        {
            int count=0;
            for(int i=1;i<strlen(str)-1;i++)
                count++;
            printf("%c%d%c\n",str[0],count,str[strlen(str)-1]);
        }
        else
            puts(str);
    }
    return 0;
}
