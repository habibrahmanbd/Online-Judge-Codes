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
    char str[1000001];
    int c=1;
    while(sf("%s",str)==1)
    {
        int n;
        pf("Case %d:\n",c++);
        sf("%d",&n);
        while(n--)
        {
            int i,j;
            sf("%d %d",&i,&j);
            if(i>j)
            {
                int temp=j;
                j=i;
                i=temp;
            }
            char ch=str[i];
            int count=0;
            for(int k=i;k<=j;k++)
            {
                if(ch==str[k])
                    count++;
                else
                {
                    pf("No\n");
                    break;
                }
            }
            if(count==j-i+1)
                pf("Yes\n");
        }
    }
    return 0;
}
