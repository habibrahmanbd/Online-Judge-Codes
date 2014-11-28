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


long long ans[1010],total;

int main()
{

     int T,cased=0;
     char s[1010];
      scanf("%d",&T);
     while(T--)
     {
         total=1;
          scanf("%s",&s);
          int n=strlen(s);
          for(int i=0;i<n;i++)
          {
              ans[i]=1;
            for(int j=0;j<i;j++)
              if(s[i]!=s[j])
                ans[i]=(ans[i]+ans[j])%100009;
          }
          for(int i=0;i<n;i++)
            total=(total+ans[i])%100009;
          printf("Case %d: %lld\n",++cased,total);
     }

    return 0;
}
