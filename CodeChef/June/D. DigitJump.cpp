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
    int n,e,i=0,j,k=0;
    char str[10000];
    scanf("%s",&str);
    long len = strlen(str);
        queue<char>Q;
        int visited[100]={0},level[100];
        int parent[100]={0};
        Q.push(str[0]);
        //visited[0]=1;
        level[0]=0;
        //int k=0,i=0;
        while(!Q.empty()&&!visited[len-1])
        {
          char u=Q.front();
          for(j=0;j<len;j++){
                pf("J= %d\n",j);
                if(u==str[j]&&!visited[j]){
                    i=j;
                    pf("I: %d\n",i);
                    break;
                }
          }
            if(!visited[i]){
            pf("Now front: %c\n",u);
            if(i>0){
            Q.push(str[i-1]);
            level[i-1]=level[i]+1;
            }
            if(i+1<len){
            Q.push(str[i+1]);
            level[i+1]=level[i]+1;
            }
            for(j=i+2;j<len;j++)
                if(u==str[j]){
                    Q.push(str[j]);
                    level[j]=level[i]+1;
                }
            visited[i]=1;
            }
        Q.pop();
        }
        pf("Level of %c: %d\n",str[len-1]);
    return 0;
}
