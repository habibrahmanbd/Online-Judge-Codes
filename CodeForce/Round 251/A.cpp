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
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n,d;
    while(sf("%d%d",&n,&d)==2)
    {
        int temp;
        int sum=0;
        int t=n;
        while(t--){
            sf("%d",&temp);
            sum+=temp;
        }
        if(sum+10*(n-1)>d)
          pf("-1\n");
        else
            pf("%d\n",(2*(n-1))+(d-(sum+(10*(n-1))))/5);
    }
    return 0;
}
