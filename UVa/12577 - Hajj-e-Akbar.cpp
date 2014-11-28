#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int caseno=0;
    char str[6];
    while(cin>>str)
    {

        if((strcmp(str,"*"))==0) break;
        else if((strcmp(str,"Hajj"))==0)
            cout<<"Case "<<++caseno<<": Hajj-e-Akbar\n";
        else if((strcmp(str,"Umrah"))==0)
            cout<<"Case "<<++caseno<<": Hajj-e-Asghar\n";
    }
    return 0;
}
