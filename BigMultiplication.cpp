#include <iostream>
#include <fstream>
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
using namespace std;
//this is the addition function.....
/*int carrya=0;
int add(int v1, int v2)
{
            int temp;
            if((v1+v2+carrya)>=10){
                temp=((v1+v2+carrya)%10);
                carrya=1;
            }
            else{
                temp=(v1+v2+carrya);
                carrya=0;
            }
        return temp;
}*/
//addition function ends here.....
int main()
{
    ifstream fin1("inputm_1.txt",ios::in);//input for a number
    ifstream fin3,fin2("inputm_2.txt",ios::in);//input of the another number
    ofstream foutb("output_before.txt",ios::out|ios::in);//previous file
    ofstream fout1("output_finalm.txt",ios::out|ios::in);//reverse multiplied file after a certain multiplication
    ofstream fout("outputm.txt",ios::out|ios::in);
    int i=-1;
    int p=0;
    fin1.seekg(-1,ios::end);
    int a,b,c,carry=0;
    while(fin1!=NULL)
        {
        a=((char)fin1.get())-'0';
        int j=-1;
        fin2.seekg(-1,ios::end);
        //output file for certain multiplication
            while(fin2!=NULL)
            {
                b=((char)fin2.get())-'0';
                cout<<"a: "<<a<<",b: "<<b<<", carry:"<<carry<<endl;
                c=((a*b)+carry)%10;
                carry = ((a*b)+carry)/10;
                fout<<c;
                fin2.seekg(--j,ios::end);
            }
            fin2.clear();

            if(carry>0)
                fout<<carry;
            //fin2.clear();
            fout.close();
            int k=-1;
            fin3.open("outputm.txt");
            fin3.seekg(-1,ios::end);
            while(fin3!=NULL)
            {
            fout1<<(char)fin3.get();
            fin3.seekg(--k,ios::end);
            }
            if(i<-1)
                fout1<<0;
            fout1.close();
            //add before file and output_finalm file and put it in temp file then copy it in before file
            //foutb.close();
            /*int ia=-1;
            int pa=0;
            ifstream fina1,fina2;
            ofstream fouta, fout_a;
            fina1.open("output_before.txt");
            fina2.open("output_finalm.txt");
            fouta.open("outputa.txt",ios::out|ios::in);
            fina1.seekg(-1,ios::end);
            fina2.seekg(-1,ios::end);
            int s = sizeof(fina1)>sizeof(fina2)?sizeof(fina1):sizeof(fina2);
            while(true)
            {
            if(s==sizeof(fina1)){
            if(fina1==NULL)
            break;
            }
            else{
                if(fina2==NULL)
                break;
            }
        int aa,ab,ac;
        if(fina1==NULL)
            aa = 0;
        else
            aa=((char)fina1.get())-'0';
        if(fina2==NULL)
            ab=0;
        else
         ab=((char)fina2.get())-'0';
         ac=add(aa,ab);
        cout<<"aa: "<<aa<<",ba: "<<ab<<", carrya: "<<carrya<<", ac: "<<ac<<endl;
        fouta.seekp(pa++);
        fouta<<ac;
        --i;
        fina1.seekg(i,ios::end);
        fina2.seekg(i,ios::end);
    }
    if(carrya>0)
       fouta<<carrya;
    fina1.close();
    fina2.close();
    fouta.close();*/
   /* int ia=-1;
    fina1.open("outputa.txt",ios::in);
    fout_a.open("output_before.txt",ios::out);
    fina1.seekg(-1,ios::end);
    while(fina1!=NULL)
    {
         fout_a<<(char)fin1.get();
        fina1.seekg(--ia,ios::end);
    }*/
           fin1.seekg(--i,ios::end);
    }
    return 0;
}
