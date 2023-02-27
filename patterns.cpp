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
    // int n;
    // cin>>n;
    // int a=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // ----------------------------------
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // -------------------------------------
    // int n;
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<a<<" ";
    //     }
    //     a++;
    //     cout<<endl;
    // }
    // -----------------------------------------
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<i-j<<" ";}
    //     cout<<endl;
    // }
    // --------------------------------------------
    // int n;
    // cin>>n;
    // char a='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a<<" ";
    //     }
    //     a++;
    //     cout<<endl;
    // }
    // -----------------------------------------------
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     char a='A';
    //     for(int j=0;j<n;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // ----------------------------------------------------
    // int n;
    // cin>>n;
    // char a='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    //     a-=2;
    // }
    // --------------------------------------------------------
    // int n;
    // cin>>n;
    // char a='A';
    // for(int i=1;i<=n;i++){
    //     char b=a;
    //     for(int j=0;j<i;j++){
    //         cout<<b<<" ";
    //         b++;
    //     }
    //     cout<<endl;
    //     a++;
    // }
    // -----------------------------------------------------------
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int a=i;//we start printing from when j==n-i, so storing value of i in a and later on increasing it value 
    //     for(int j=1;j<=n;j++){
    //         if(j==n-a){
    //         cout<<"*"<<" ";
    //         a--;
    //         }
    //         else{
    //             cout<<" "<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // ---------------------------------------------------------
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int a=i;
//         int num=1;
//         int num2=1;
//         for(int j=1;j<=n;j++){
//             if(j==n-a){
//             cout<<num<<" ";
//             a--;
//             num++;
//             }
//             else{
//                 cout<<" "<<" ";
//             }}
//             for(int y=0;y<i;y++){
//                 cout<<num2<<" ";
//                 num2++;
//             }
//         cout<<endl;
// }
// -------------------------------------------
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a=i;
        int num=1;
        int num2=i;
        for(int j=1;j<=n;j++){
            if(j==n-a){
            cout<<num<<" ";
            a--;
            num++;
            }
            else{
                cout<<" "<<" ";
            }}
            for(int y=0;y<i;y++){
                cout<<num2<<" ";
                num2--;
            }
        cout<<endl;
}
}