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
    int t,i=1;
    cin>>t;
    getchar();
    char str[10][101];
    int arr[10],k=1;
    while(t--)
    {
        int max=-1000;
        for(int i=0;i<10;i++){
        cin>>str[i]>>arr[i];
        if(max<arr[i])
            max=arr[i];
        }
        printf("Case #%d:\n",k++);
        for(int i=0;i<10;i++)
            if(arr[i]==max)
            printf("%s\n",str[i]);
    }
    return 0;
}
