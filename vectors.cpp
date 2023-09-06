#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    //initalsising vectors - vector<type> nameOfVector;
    vector<int> v ;
    // general notes- in the start the memory allocated to the vector is 0 but every time the memory is filled it assigns doubles the previous memory to the vector like if it had to elements and you pushed third phone its new memory will be 2*2 i.e. 4. capacity function tells us how much memory is allocated to the vector.
    cout<<"empty or not? "<<v.empty()<<endl;//tells whether empty or not - gives 0 or 1
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(1);//pushes the element
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;    
    cout<<"element at 2nd index-> "<<v.at(2)<<endl;
    cout<<"front-> "<<v.front()<<endl;
    cout<<"back-> "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    //2nd way - initalsising with custom size vector<type> name(InitialSize,element assigned at starting), it will print five time 1 for now;
    vector<int> a(5,1);
    cout<<"printing a...."<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    vector<int> last(a);// this will copy the element of 'a' into a new vector name as 'last'
    cout<<"printing last...."<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    // ------------------------------------------------------------------------------
    //more things you can do with vectors
    vector<int> ve={1,2,3,4};
    // ve.push_back(1);
    // ve.push_back(2);
    // ve.push_back(3);
    // ve.push_back(4);
    cout<<"\nprinting ve...."<<endl;
    for(int i:ve){
        cout<<i<<" ";
    }
    cout<<"\nFinding 2-> "<<binary_search(ve.begin(),ve.end(),2)<<endl;//using binary search function(where to begin the search,till where, what to search).
    cout<<"lower bound-> "<<lower_bound(ve.begin(),ve.end(),2)-ve.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(ve.begin(),ve.end(),2)-ve.begin()<<endl;


    rotate(ve.begin(),ve.begin()+1,ve.end());//rotating an array(where it starts , what and how many to rotate,where it ends)
    cout<<"printing after rotating by 1-> "<<endl;
    for(int i:ve){
        cout<<i<<" ";
    }
    rotate(ve.begin(),ve.end()-1,ve.end());//rotating an array to left
    cout<<"printing after rotating by 1 again in opposite direction-> "<<endl;
    for(int i:ve){
        cout<<i<<" ";
    }

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"reversed string-> "<<s;



}