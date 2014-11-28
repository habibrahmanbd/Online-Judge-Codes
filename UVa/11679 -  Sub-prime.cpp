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
    int B,N;
    while(scanf("%d%d",&B,&N),(B||N))
    {
        int R[B+1],d,c,v,i,count=0;
        for(i=1;i<=B;i++)
            scanf("%d",&R[i]);
        for(i=1;i<=N;i++)
        {
            scanf("%d%d%d",&d,&c,&v);
            R[d]=R[d]-v;
            R[c]=R[c]+v;
        }
        for(i=1;i<=B;i++)
        if(R[i]>=0){
            count++;
        }
        if(count==B)
                printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
