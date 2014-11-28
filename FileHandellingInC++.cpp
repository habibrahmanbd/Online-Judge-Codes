#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <list>
#include <queue>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <sstream>
#include <bitset>
#include <set>
#define sf scanf
#define pf printf
#include <fstream>
using namespace std;
int carry=0;
int add(int v1, int v2)
{
            int temp;
            if((v1+v2+carry)>=10){
                temp=((v1+v2+carry)%10);
                carry=1;
            }
            else{
                temp=(v1+v2+carry);
                carry=0;
            }
        return temp;
}
int main()
{
    ifstream fin1("input1.txt",ios::in);
    ifstream fin2("input2.txt",ios::in);
    ofstream fout("output.txt",ios::out);
    ofstream fout1("output_final.txt",ios::out);
    int i=-1;
    int p=0;
    fin1.seekg(-1,ios::end);
    fin2.seekg(-1,ios::end);
    int s = sizeof(fin1)>sizeof(fin2)?sizeof(fin1):sizeof(fin2);
    while(true){
            if(s==sizeof(fin1)){
            if(fin1==NULL)
            break;
            }
            else{
                if(fin2==NULL)
                break;
            }
        int a,b,c;
        if(fin1==NULL)
            a = 0;
        else
            a=((char)fin1.get())-'0';
        if(fin2==NULL)
            b=0;
        else
            b=((char)fin2.get())-'0';
        c=add(a,b);
        //cout<<"a: "<<a<<",b: "<<b<<", carry: "<<carry<<", c: "<<c<<endl;
        fout.seekp(p++);
        fout<<c;
        --i;
        fin1.seekg(i,ios::end);
        fin2.seekg(i,ios::end);
    }
    if(carry>0)
       fout<<carry;
    fin1.close();
    fin2.close();
    fout.close();
    i=-1;
    fin1.open("output.txt",ios::in);
    fin1.seekg(-1,ios::end);
    while(fin1!=NULL)
    {
         fout1<<(char)fin1.get();
         --i;
        fin1.seekg(i,ios::end);
    }
    return 0;
}
