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
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t, p,q,count;
    while(cin>>t)
    {
        count=0;
        while(t--)
        {
            cin>>p>>q;
            if(q-p>=2)
                count++;
        }cout<<count<<endl;
    }
    return 0;
}
