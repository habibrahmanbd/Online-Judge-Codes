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
    char str[4][110];
    while(scanf("\n%s\n%s\n%s\n%s",str[0],str[1],str[2],str[3])==4)
    {
        int flag=0,ans=0,ans_in=-1;
        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int k=0;k<4;k++){
                if(k==i)
                continue;
                    int len1=strlen(str[i])-2;
                    int len2=strlen(str[k])-2;
                if(len1*2<=len2)
                    count++;
            }
            if(count==3){
                ans_in=i;
                ans++;
                flag=1;
            }
            count=0;
            for(int j=0;j<4;j++)
            {
                if(j==i)
                continue;
                int len1=strlen(str[i])-2;
                int len2=strlen(str[j])-2;
                if(len1/2>=len2)
                    count++;
            }
            if(count==3){
                ans++;
                ans_in=i;
                flag=1;
            }
        }
        if(ans==1)
            printf("%C\n",'A'+ans_in);
        else
            printf("C\n");
    }
    return 0;
}
