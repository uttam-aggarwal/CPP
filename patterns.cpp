#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int a=1;
    //     for(int j=0;j<n;j++){
    //         cout<<a;
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // ------------------------------
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
