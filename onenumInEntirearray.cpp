//there are multiple way to initalise entire array with a single digit
#include <iostream>
using namespace std;
#define x1   1
#define x2   x1,  x1
#define x4   x2,  x2
#define x8   x4,  x4
#define x16  x8,  x8
#define x32  x16, x16
int main(){
/*With GCC compilers, we can use designated initializers. To initialize a range of elements to the same value, we can write [first ... last] = value.*/
int arr[] = {[0 ... 4] = 1};
// -----------------------------
/*We can’t use the initializer list with large arrays, and designated initializers will only work with the GCC compilers. For initializing a huge array with the same value, we can use macros, as shown below*/
// int arr[] = { x32, x8, x4, x1 };
//     int n = sizeof(arr)/sizeof(int);    // (32 + 8 + 4 + 1)
 
//     printf("The size of the array is %d\n", n);
//     printf("The value of any element is %d", arr[rand() % n]);
// ---------------------------------------
int n = 5;
    int val = 1;
 
    int arr[n];
    std::fill_n (arr, n, val);
 
    // always prints 1
    std::cout << arr[rand() % n];
}