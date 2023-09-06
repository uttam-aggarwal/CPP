// #include <iostream>
// using namespace std;
// int main(){
//     int n,arr1[100],pos,temp[100],a=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cin>>pos;
//     if(pos>=n){pos=pos-n;}
//     for(int i=0;i<pos;i++){
//         temp[a]=arr1[n-pos+i];
//         a++;
//     }
//     for(int i=0;i<n-pos;i++){
//         temp[a]=arr1[i];
//         a++;
//     }

// // final printing
//     cout<<"Original array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     cout<<"\nUpdated array: ";
//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int firstO(int arr1[],int n,int key){
//     int a=-1,s=0,e=n-1,mid;
//     mid=s+(e-s)/2;
//     while(s<=e){
//         if(key==arr1[mid]){
//             a=mid;
//             e=mid-1;
//         }
//         else if(key<arr1[mid]){
//             e=mid-1;
//         }
//         else if(key>arr1[mid]){
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return a;
// }
// int lastO(int arr1[],int n,int key){
//     int a=-1,s=0,e=n-1,mid;
//     mid=s+(e-s)/2;
//     while(s<=e){
//         if(key==arr1[mid]){
//             a=mid;
//             s=mid+1;
//         }
//         else if(key<arr1[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return a;
// }
// int main(){
//     int n,arr1[100],key,check1,check2;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr1[n];
//     }
    // check1=firstO(arr1,n,key);
    // if(check1==-1){
    //     cout<<"Target value "<<key<<" is not found in the array.";
    // }
    // else{
    //     check2=lastO(arr1,n,key);
    //     cout<<"The first occurrence of "<<key<<" is at index "<<check1<<".";
    //     cout<<"The last occurrence of "<<key<<" is at index "<<check2<<".";
    // }
//}
// #include <iostream>
// using namespace std;
// void fun(int*);
//     int main(){
//     int i = 10;
//     fun((&i)++);
// }
// void fun(int *p)
// {
//     cout<<*p;
// }
#include <iostream>
using namespace std;

int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int *ptr = arr;
   int *ptr2 = ptr + 3;
   int result = ptr2 - ptr;
   cout << result;
   return 0;
}