#include <iostream>
#include <fstream>
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
#define SF scanf
#define PF printf
#define FOR(p, n, m) for(long int i=p; i<n; i+=m)
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
using namespace std;
const int INF = 1<<29;
const int mx = 2e5 + 7;
int arr[mx],A[mx],L1[mx];
int n;
int function()
{
    vector<int>temp(n+5,INF);
    temp[0]=-INF;
    int lis = 0 ;

    for(int j=0;j<n;j++)
    {
        int low = lower_bound(temp.begin(),temp.end(),A[j])- temp.begin();
        temp[ low ] = A[ j ] ;
        lis = max(lis,low);
        L1[j] = lis ;
    }
    return lis;
}

int main() {
    int t;
    cin>>t;
    int c;
    for(c=1; c<=t;c++){
        cin>>n;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            arr[x] = j;
        }
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            A[j] = arr[x];
        }
        int ans = n-function();
        ans *= 2;
        cout<<"Case "<<c<<": "<< ans << endl;
    }
}
