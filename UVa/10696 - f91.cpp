#include<iostream>
using namespace std;
int main()
{
    long fact(long n);
    long n,result;
    while(cin>>n)
    {
        if(n==0) break;
        else {result=fact(n);
        cout<<"f91("<<n<<") = "<<result<<"\n";
        }
    }
    return 0;
}
long fact(long t)
{
    if(t>=101) return (t-10);
    else if(t<=100) return fact(fact(t+11));
}
