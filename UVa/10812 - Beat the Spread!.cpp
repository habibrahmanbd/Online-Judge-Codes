#include<iostream>
using namespace std;
int main()
{
    int sum, abs,test,a,b,max,min;
    cin>>test;
    while(test--)
    {
        cin>>sum>>abs;


       if(sum>=abs&&(sum+abs)%2==0)
        {
        a=(sum+abs)/2;
        b=sum-a;
        max=a>b?a:b;
            min=a<b?a:b;
            cout<<max<<' '<<min<<endl;
        }
        else
            cout<<"impossible\n";

    }
    return 0;

}
