// #include <iostream>
// using namespace std;
// int update(int a){
//     int ans=a/2;
//     return ans;
// }
// int main(){
//     // //can be use to print even numbers
//     // for(int i=0;i<=5;i++){
//     //     cout<<i<<endl;
//     //     i++;
//     // }
//     // for(int i=1;i<=15;i+=2){
//     //     cout<<i<<" ";
//     //     if(i&1){
//     //         continue;
//     //     }
//     //     i++;
//     // }
//     int a=10;
//     a=update(a);
//     cout <<a<<endl;

// }
#include <iostream>
using namespace std;
int main(){
    int num,arr1[1000],pos,temp[1000],a=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr1[i];
    }
    cin>>pos;
    for(int i=pos+1;i<num;i++){
        temp[a]=arr1[i];
        a++;
    }
    a++;
    for(int i=0;i<pos;i++){
        temp[a]=arr1[i];
    }
    for(int i=0;i<num;i++){
        cout<<temp[i]<<" ";
    }
    
}