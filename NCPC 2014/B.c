#include <stdio.h>
#include <string.h>
int include[1000];
int n;
char s[1000];
int count=1;
void subsets(int i)
{
    int j;
    if(i==n){
        int f=0;
        char temp[1000]="";
        int cnt=0;
        for(j=0;j<n;++j){

            if(include[j]){

                temp[cnt]=s[j];

                if(cnt>0 && temp[cnt]==temp[cnt-1]){ f=1; break;}
                ++cnt;

            }
        }
        temp[cnt]='\0';
        if(!f)
            {
        ++count;
        if(count>=100009)
            count=count%100009;
        }
   }
    else{
        include[i] = 1;
        subsets(i + 1);
        include[i] = 0;
        subsets(i + 1);
  }
}
int main(){
    int tcase,i;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++){
    scanf("%s",s);
    n=strlen(s);
    subsets(0);
    printf("Case %d: %d\n",i,(count-1)%100009);
    count=1;
    }
    return 0;
}
