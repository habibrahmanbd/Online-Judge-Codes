#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    int temp;
    while(1)
    {
        temp=a%b;
        if(temp==0)
            break;
        a=b;
        b=temp;
    }
    return b;
}
int main()
{
    int i,j,N;
    long G;
    while(cin>>N)
    {
        if(N==0) break;
        G=0;
        for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
        G+=GCD(i,j);
        }
        cout<<G<<endl;
    }
    return 0;
}
