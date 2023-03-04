#include <iostream>
using namespace std;
//programme is about taking a input complementing its binary form and print the decinal associated with me for example-- the input is 5 so its binary is 101 complementing it will give 010 which is equal to 2.
int main(){
    int n;
    scanf("%d",&n);
    int b=n,mask=0;
    if(n==0){printf("0");}
    else{while(b!=0){
        mask=(mask<<1)|1;//creating a mask which will have structure like 000....0111 where number of 1 will vary
        b=b>>1;
    }
    int ans=(~n)&mask;
    printf("%d",ans);}

}