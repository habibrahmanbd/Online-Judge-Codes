#include<iostream>
using namespace std;
long fact(long n)
{
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        n/=10;
        sum+=rem;
    }
    if(sum<10) return sum;
    else return fact(sum);
}
int main()
{
    long num;
    while(cin>>num)
    {
        if(num==0) break;
        else
        {
            int result=fact(num);
            cout<<result<<endl;
        }
    }
    return 0;
}
