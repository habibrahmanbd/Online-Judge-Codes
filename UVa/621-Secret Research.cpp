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
    char str[1000];
    int t;
    cin>>t;
    getchar();
    while(t--)
        {
            gets(str);
            int len=strlen(str);
            if(str[len-2]-'0'==3&&str[len-1]-'0'==5)
                printf("-\n");
            else if(str[0]-'0'==9&&str[len-1]-'0'==4)
                printf("*\n");
            else if(str[0]-'0'==1&&str[1]-'0'==9&&str[2]-'0'==0)
                printf("?\n");
            else
                printf("+\n");
        }
        return 0;

}
