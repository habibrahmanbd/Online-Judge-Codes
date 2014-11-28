#include<iostream>
using namespace std;
int main()
{
    int test,n,k,p,caseno=1,rem;
    cin>>test;
    while(test--)
    {
        cin>>n>>k>>p;
        rem=(k+p)%n;
        if(rem==0)
            cout<<"Case "<<caseno++<<": "<<n<<"\n";
        else
            cout<<"Case "<<caseno++<<": "<<rem<<"\n";
    }
    return 0;
}
