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
    long n;
    while(sf("%ld",&n)==1)
    {
        long temp,max_count=0,count=0;
        //bool flag=true;
        for(long i=0;i<n;i++)
        {
            sf("%ld",&temp);
            if(temp!=0)
                count++;
            else if(temp==0&&i!=(n-1))
            {
                //flag = false;
                if(max_count<count)
                    max_count=count;
                count=0;
            }
            if(i==(n-1))
            {
                if(max_count<count)
                    max_count=count;
                count=0;
            }

        }
        pf("%ld\n",max_count);
    }
    return 0;
}
