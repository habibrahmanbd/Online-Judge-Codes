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
    int n, p, q;
    while(cin>>n)
    {
        int arr[n+1];
        for(int i=1; i<=n; i++)
            arr[i]=0;
        cin>>p;
        int x,y;
        while(p--){
            cin>>x;
            arr[x]++;
        }
        cin>>q;
        while(q--)
        {
            cin>>y;
            arr[y]++;
        }
        int count=0;
        for(int i=1; i<=n; i++)
            if(arr[i]>0)
            count++;
        if(count==n)
            cout<<"I become the guy."<<endl;
        else
            cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
