#include<iostream>
using namespace std;
int main()
{
    int a,b,c,test;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if((a+b>c)&&(b+c>a)&&(c+a>b))
        {
            cout<<"OK\n";
        }
        else
            cout<<"Wrong!!\n";
    }
    return 0;
}
