#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int num,l;
    char str[1050];
    while(cin>>str)
    {
        num=0;
        int j=0;
        l=strlen(str);
        if(l==1&&str[0]=='0')
            break;
        for(int i=0;i<l;i++){
            num=(num*10)+(str[i]-'0');
            num=num%11;
        }
        if(num==0)
            cout<<str<<" is a multiple of 11.\n";
        else
            cout<<str<<" is not a multiple of 11.\n";
    }
    return 0;
}
