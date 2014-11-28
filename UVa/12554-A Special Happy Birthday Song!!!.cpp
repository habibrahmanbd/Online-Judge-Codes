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
#define pf printf
#define sf scanf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n)==1){
    char str[n][101];
    getchar();
    for(int i=0;i<n;i++)
        gets(str[i]);
    char str2[4][20];
    strcpy(str2[0],"Happy");
    strcpy(str2[1],"birthday");
    strcpy(str2[2],"to");
    strcpy(str2[3],"you");
    int j=0;
    if(n>16)
    {
    int i=0;
    while(!(i==0&&j>n-1))
    {
        if(i==11)
            pf("%s: %s\n",str[j%n],"Rujia");
        else
            pf("%s: %s\n",str[j%n],str2[i%4]);
        j++;
        i++;
        if(i>=16)
            i=0;
    }
    }
    else
    for(int i=0;i<16;i++)
    {
        if(i==11)
            pf("%s: %s\n",str[j%n],"Rujia");
        else
            pf("%s: %s\n",str[j%n],str2[i%4]);
        j++;
    }
    }
    return 0;
}
