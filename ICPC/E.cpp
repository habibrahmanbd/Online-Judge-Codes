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
#define OC(cs) printf("Case %ld: ",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define feb 28
#define ajsn 30
#define om 31
bool check(int d,int m)
{
    if(m==1&&d<=31)
    return true;
    if(m==2&&d<=28)
    return true;
    if(m==3&&d<=31)
    return true;
    if(m==4&&d<=30)
    return true;
    if(m==5&&d<=31)
    return true;
    if(m==6&&d<=30)
    return true;
    if(m==7&&d<=31)
    return true;
    if(m==8&&d<=31)
    return true;
    if(m==9&&d<=30)
    return true;
    if(m==10&&d<=31)
    return true;
    if(m==11&&d<=30)
    return true;
    if(m==12&&d<=31)
    return true;
        return false;
}

int main()
{
    input;
    int64 t=IL;
    int64 cs=1;
    while(t--)
    {
        OC(cs++);
        int d1=II, m1=II, d2=II, m2=II;
        if((check(d1,m1)&&check(d2, m2))||(check(m1,d1)&&check(m2, d2)))
        {
            int count=0;
            if(check(d1,m1)&&check(d2, m2))
            {
                if(m1<m2)
                    count++;
                else if(m1==m2)
                {
                    if(d1<d2)
                        count++;
                    else{
                        pf("I am sure there is some kinda mistake!\n");
                        continue;
                    }

                }
                else
                {
                    if(d1<d2)
                        count++;
                    else
                    {
                        pf("I am sure there is some kinda mistake!\n");
                        continue;
                    }

                }

            }
            if(check(m1,d1)&&check(m2, d2))
            {
                if(d1<d2)
                    count++;
                else if(d1==d2)
                {
                    if(m1<m2)
                        count++;
                    else{
                        pf("I am sure there is some kinda mistake!\n");
                        continue;
                    }
                }
                else
                {
                    if(m1<m2)
                        count++;
                    else
                    {
                        pf("I am sure there is some kinda mistake!\n");
                        continue;
                    }
                }
            }
            if(count==1)
                pf("Okay got it!\n");
            else if(count==2)
                pf("Oh no it is ambiguous!\n");
        }
        else
            pf("I am sure there is some kinda mistake!\n");
    }
    return 0;
}
