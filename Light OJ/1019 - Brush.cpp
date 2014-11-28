/*******************************
*   Bismillah hir Rohmanir Rahim *
*   Habibur Rahman Habib        *
*   Dept. of CSE, RUET          *
*   habib_cse_ruet@yahoo.com  *
********************************/

using namespace std;
//C headers
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cassert>
#include <ctime>
//C++ headers
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
//type def
#define PI 2*acos (0.0)
typedef long long int64;
typedef unsigned long long int64u;
#define db double
#define pb push_back
#define pii pair<int ,int >
#define NL puts("")
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define MOD 100000007
#define INF 1<<29
//Intput_Output
#define input freopen ("input.txt", "r", stdin);
#define output freopen ("output.txt", "w", stdout);
#define pf printf
#define sf scanf
#define co cout
#define ci cin
#define II ({ int a; scanf("%d",&a); a;}) //Integer Input
#define IL ({ int64 a; scanf("%lld",&a);  a;})  //Long Integer Input
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d: ",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define mx 1<<13
//vector<int>edge[mx];
//stack<int>S;
int main()
{
//    input;
    int testCase=II;
    int oc=1;
    while(oc<=testCase)
    {
    vector<int>edge[2000];
    stack<int>S;
    int N=II,E=II,start=1;
    int dist[2000];
    bool visited[200]={false};
    int cost[200][200];
    for(int i=1;i<=E;i++)
    {
        int x=II,y=II,z=II;
        edge[x].push_back(y);
        edge[y].pb(x);
        dist[x]=INF;
        dist[y]=INF;
        if(cost[x][y]==0||z<cost[x][y])
        cost[x][y]=z;
        if(cost[y][x]==0||z<cost[y][x])
        cost[y][x]=z;
    }
    int end=N;
    dist[start]=0;
    S.push(start);
    int u=start;
    visited[start]=true;
    while(!visited[N])
    {
        if(S.empty()) break;
        int mini=INF,in;
        for(int i=0;i<edge[u].size();i++){
                if((dist[u]+cost[u][edge[u][i]])<=dist[edge[u][i]])
                    dist[edge[u][i]]=dist[u]+cost[u][edge[u][i]];
                if(mini>=dist[edge[u][i]]){
                    mini=dist[edge[u][i]];
                    in=edge[u][i];
                }
        }
        //S.pop();
        S.push(in);
        visited[u]=true;
        u=in;
    }
    OC(oc++);
    if(visited[N])
        pf("%ld\n",dist[N]);
    else
        pf("Impossible\n");
    }
    return 0;
}
