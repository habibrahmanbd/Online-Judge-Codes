#include<iostream>
#include<cstring>
using namespace std;
int sod(int temp);
int main()
{
   int fun(int a, int b);
   int fun(int a);
   char str[4];
   long int a[3],d,len,test,i;
   cin>>test;
   for(i=1;i<=test;i++){
   cin>>str;
   len=strlen(str);
   if(len==1){

    cout<<"Case "<<i<<": "<<d<<endl;
   }
   else{
        int m,n;
    d=fun(str[0]-'0',str[2]-'0');
    cout<<"Case "<<i<<": "<<d<<endl;
   }
   }
   return 0;
}
int fun(int a, int b) {
int ans = 0;
int i, j, cnt;
for(i=a; i<=b; i++) {
cnt = 0;
for(j=1; j<=i; j++) {
if( j + sod(j) == i ) cnt++;
} if( cnt == 0
)
ans++;
} return ans;
}
int fun(int a) {
int i;
for(i=1; i<=a; i++){
if( i + sod(i) == a ){
return i;
}
} return -1;
}
int sod(int temp)
{
    int rem;
    while(temp>0)
    {
        rem+=temp%10;
        temp/=10;
    }
    return rem;
}
//not solved....
