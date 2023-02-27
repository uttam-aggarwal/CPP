#include <iostream>
using namespace std;
int main(){
    // //can be use to print even numbers
    // for(int i=0;i<=5;i++){
    //     cout<<i<<endl;
    //     i++;
    // }
    for(int i=1;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
}