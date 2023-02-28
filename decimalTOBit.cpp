#include <iostream>
#include <math.h>
using namespace std;
//working different for vs code and online compiler
int main()
{
    int n;
    cin >> n;


    int ans = 0;
    int i=0;
    while (n != 0)
    {
        int bit = n & 1; //& with 1 do the and operation with the last bit of the number
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; // << this operation is use to right shift that will remove the last bit of the number n and shift to the right place that is the preceding bit number
        i++;
    }
    cout << "answer is " << ans <<endl;
}