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
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d:",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
int compare_ints(const void* a, const void* b)   // comparison function
{
    int arg1 = *reinterpret_cast<const int*>(a);
    int arg2 = *reinterpret_cast<const int*>(b);
    if(arg1 < arg2) return -1;
    if(arg1 > arg2) return 1;
    return 0;
}
int main()
{
    int n=II;
    int a[n];
    FOR(0,n-1,1)
    sf("%d",&a[i]);
    int m=II;
    int b[m];
    FOR(0,m-1,1)
    sf("%d",&b[i]);
    qsort(a,n,sizeof(int),compare_ints);
    qsort(b,m,sizeof(int),compare_ints);
    if(n<=m)
    {
        int p=0,r=0;
        FOR(0,n-1,1)
        {
            int j=p;
            int count=0;
            while(j<m)
            {
                if(abs(a[i]-b[j])<=1)
                {
                    p=j+1;
                    count++;
                    break;
                }
                j++;
            }
            if(count)
                r++;
        }
        pf("%d\n",r);
    }
    else
    {
        int p=0,r=0;
        FOR(0,m-1,1)
        {
            int j=p;
            int count=0;
            while(j<n)
            {
                if(abs(a[j]-b[i])<=1)
                {
                    p=j+1;
                    count++;
                    break;
                }
                j++;
            }
            if(count)
                r++;
        }
        pf("%d\n",r);
    }
    return 0;
}
