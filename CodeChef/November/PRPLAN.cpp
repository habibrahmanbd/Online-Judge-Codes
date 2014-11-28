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
#define OC(cs) printf("Case %d:",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define mx 1000005
int main()
{
    int64 T=IL;
    while(T--)
    {
        char s[mx];
        sf("%s",s);
        int64 len = strlen(s);
        int64 i,j;
        bool flag=true;
        int64 starting=0, ending=len-1,m=0;
        int64 count=0;
        while(starting<=ending && count<1)
        {
            flag=true;
            i=0;
            j=len-1;
            while(i<=j)
            {
                if(i==m && i<j)
                    i++;
                if(j==m && i<j)
                    j--;
                if(s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        if(flag==true)
            count++;
        if(m==starting)
        {
            m=ending;
            starting++;
        }
        else
        {
            m=starting;
            ending--;
        }
        }
        if(count)
            pf("YES\n");
        else
            pf("NO\n");
    }
    return 0;
}
