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
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n,p=0;
    while(sf("%d",&n)==1)
    {
        getchar();
        char str[n][100];
        int rec[n],sep[n];
          //here name of group members.....
        for(int i=0;i<n;i++){
            cin>>str[i];
            rec[i]=sep[i]=0; //receive and spending money initially...
        }

        for(int j=0;j<n;j++)
        {
            getchar(); //\n character removing...
            char temp[100];
            int money,person;
            cin>>temp>>money>>person;
            if(person==0)
                continue;
            else{
            char name[100];
            for(int i=0;i<n;i++){

            if(strcmp(temp,str[i])==0){
            sep[i]+=money;
            rec[i]+=money%person;
            }
            }
            int divider=person;
            while(person--){
            cin>>name;
            for(int k=0;k<n;k++)
            if(strcmp(name,str[k])==0)
            rec[k]+=(money/divider);
            }
            }
        }
        if(p>0)
            pf("\n");
        for(int i=0;i<n;i++)
        {
            pf("%s %d\n",str[i],(rec[i]-sep[i]));
        }
        p++;
    }
    return 0;
}
