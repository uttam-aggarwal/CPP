#include <iostream>
#include <string.h>
using namespace std;
// void check(int num);
// int main(){
//     int num;
//     cout<<"ENTER THE NUMBER: ";
//     cin>>num;
//     check(num);
    
// }
// void check(int num){
//     if(num<0) cout<<num<<" is negative";
//     else cout<<num<<" is positive";
// }
// class result{
//     public : 
//     int marks;
//     void calcresult(){
//         if (marks>33) cout<<"PASS";
//         else cout<<"FAIL";
//     }
// };
// int main(){
//     result r1,r2;
//     cin >> r1.marks;
//     cin >> r2.marks;
//     r1.calcresult();
// }




// class evaluation{
//     char grade;
//     int marks_sci;
//     int marks_math;
//     float percentage;
//     public:
//     void takeInput(){
//         cout<<"ENTER sci marks ";
//         cin>>marks_sci;
//         cout<<"ENTER matks marks ";
//         cin>>marks_math;
//     }
//     void calcper(){
//         percentage=(marks_sci+marks_math)/2;
//         cout<<"Your percentage is - "<<percentage;
//     }
//     void DisplayGrade(){
//         if(33>percentage){grade='F';}
//         else if(33<=percentage and percentage<50){grade='D';}
//         else if(50<=percentage and percentage<70){grade='C';}
//         else if(70<=percentage and percentage<90){grade='B';}
//         else if(90<=percentage and percentage<101){grade='A';}
//         else cout<<"ERROR in showing grade";
//         cout<<"\nThe grade is "<<grade;

//     }

// };
// int main(){
//     evaluation p[4];
//     p[0].takeInput();
//     p[0].calcper();
//     p[0].DisplayGrade();
// }
// -----------------------------------
// union data{
//     int intvalue;
//     float floatvalue;
//     char charvalue;
// };
// int main(){
//     data mydata;
//     mydata.intvalue=9;
//     cout<<mydata.intvalue<<endl;
//     mydata.floatvalue=9.9;
//     cout<<mydata.floatvalue<<endl;
//     mydata.charvalue='a';
//     cout<<mydata.charvalue<<endl;

// }
// ----------------------------------------------------------
// int main(){
//     int x=10,y=20;
//     int *ptr=&x;
//     int &ref=y;
//     *ptr++;
//     ref++;
//     cout<<x<<""<<y;
//     return 0;
// }
// ------------------------------------------
// void print(int *p,int m){
//     m=m+5;
//     *p=*p+m;
// }
// int main(){
//     int i=5,j=10;
//     print(&i,j);
//     cout<<i+j;
// }
// ---------------------------------------------------
int main(){
    int num[5];
    int*p;
    p=num;
    *p=10;
    p++;
    *p=20;
    p=&num[2];
    *p=30;
    p=&num[3];
    *p=40;
    p=num;
    *(p+4)=50;
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }

}