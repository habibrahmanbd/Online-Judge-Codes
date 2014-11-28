#include<iostream>
using namespace std;
int main()
{
    int num,caseno=1;
    while(cin>>num)
    {

        if(num==0)
            break;
        cout<<"Case "<<caseno++<<": "<<num/2<<endl;
    }
    return 0;
}
