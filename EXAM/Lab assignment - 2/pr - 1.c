#include<stdio.h>

int main()
{
    int n,mod,div,i=1,res=0,new_res=0;
    scanf("%d",&n);
    mod = n%6;
    div = n/6;

       while(mod>=1){
            if(mod>3){
                res+=n*(-1);
            }
            else{
                res+=n;
            }
        n--;
        mod--;
        }
        res = res + ((div)*-9);
        printf("%d\n",res);
}
