#include<iostream>
#include<cmath>
using  namespace std;
int main()
{
    int radious,length,width,right_length,left_length,test,x=0,y=0,caseno=1;
    cin>>test;
    while(test--)
    {
        cin>>radious;
        length=radious*5;
        width=radious*3;
        right_length=(int)length*55/100;
        left_length=length-right_length;
        cout<<"Case "<<caseno++<<":"<<endl;
        cout<<(x-left_length)<<' '<<y+(width/2)<<endl;
        cout<<(x+right_length)<<' '<<y+(width/2)<<endl;
        cout<<(x+right_length)<<' '<<y-(width/2)<<endl;
        cout<<(x-left_length)<<' '<<y-(width/2)<<endl;
    }
    return 0;
}
