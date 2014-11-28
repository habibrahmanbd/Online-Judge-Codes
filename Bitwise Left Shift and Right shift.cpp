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
#define INF 100007
using namespace std;
int main()
{
    int arr[100];
    FOR(0,100,1)
        arr[i]=rand()%100;
    FOR(0,100,1)
    {
        cout<<arr[i]<<" ";
        arr[i]<<=i%10; //here is the left shifting by i;
        arr[i]>>=i%10; // here is the right shifting by i
        if(arr[i]&1)
            cout<<"Odd"<<" ";
        else
            cout<<"Even"<< " ";
         cout<<arr[i]<<" "<<i%10<<endl;
    }
    return 0;
}
