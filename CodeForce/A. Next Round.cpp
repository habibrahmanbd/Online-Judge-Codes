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
    int n,k;
    while((scanf("%d%d",&n,&k))!=EOF)
    {
        int i=1,count=0;
        int arr[n+1];
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        for(i=1;i<=n;i++)
            if(arr[i]>=arr[k]&&arr[i]!=0)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
