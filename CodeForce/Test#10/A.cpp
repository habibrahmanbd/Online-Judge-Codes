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
        long m=n-1;
        long arr[m];
        for(long i=0;i<m;i++)
            sf("%ld",&arr[i]);
        sort(arr,arr+m);
        long j=1;
        long count=0;
        bool flag=false;
        for(long i=0;i<m;i++){
            if(arr[i]!=j){
            flag=true;
            pf("%ld\n",j);
            break;
            }
            else
                count++;
        j++;
        }
        if(count==m&&flag==false)
            pf("%ld\n",m+1);
    }
    return 0;
}
