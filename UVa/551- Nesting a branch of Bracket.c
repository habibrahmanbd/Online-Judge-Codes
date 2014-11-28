#include<iostream>
#include<cstring>
#include<cstdio>
#include<ctype.h>
#include<stack>
using namespace std;
int main()
{
    char str[150];
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        stack<char> S;
        cin>>str;
        int flag=0;
        int len = strlen(str);
        if(str==NULL)
        {
            printf("Yes\n");
            continue;
        }
        if(len%2)
        {
            printf("No\n");
            continue;
        }
        for(int i=0;i<len;i++){
            if(str[i]=='('||str[i]=='['){
                S.push(str[i]);
               }
            else{
                if(str[i]==')'&& S.top()=='('&&!S.empty())
                S.pop();
                else if(str[i]==']'&&S.top()=='['&&!S.empty())
                S.pop();
                else{
                    flag=1;
                    break;
                }
                }
            }
        if(S.empty()&&flag!=1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
