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
int main()
{
    int i;
    while((scanf("%d",&i))!=EOF)
    {
        if(i<=2)
            printf("NO\n");
        else{
        if(i%2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        }
    }
    return 0;
}
