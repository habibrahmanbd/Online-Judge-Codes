#include <iostream>
#include <fstream>
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
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n,m,a,b;
    while(sf("%d%d%d%d",&n,&m,&a,&b)==4)
    {
        if(a<=(b/m))
            pf("%d\n",a*n);
        else
        {
            if((n%m)*a>b)
                pf("%d\n",((n/m)*b)+b);
            else
                pf("%d\n",((n/m)*b)+((n%m)*a));
        }
    }
    return 0;
}
