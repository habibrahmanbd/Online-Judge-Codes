#include<iostream>
using namespace std;
int main()
{
    int test,term1,term2,final,atd,ct[3],result,caseno=1;
    cin>>test;
    while(test--)
    {
        cin>>term1>>term2>>final>>atd>>ct[0]>>ct[1]>>ct[2];
        for(int i=0;i<2;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(ct[i]<ct[j])
                {
                    int temp=ct[i];
                    ct[i]=ct[j];
                    ct[j]=temp;
                }
            }
        }
        result=term1+term2+final+atd+(ct[0]+ct[1])/2;
        if(result>=90) cout<<"Case "<<caseno++<<": A"<<endl;
        if(result>=80&&result<90) cout<<"Case "<<caseno++<<": B"<<endl;
        if(result>=70&&result<80) cout<<"Case "<<caseno++<<": C"<<endl;
        if(result>=60&&result<70) cout<<"Case "<<caseno++<<": D"<<endl;
        if(result<60) cout<<"Case "<<caseno++<<": F"<<endl;
    }
    return 0;
}
