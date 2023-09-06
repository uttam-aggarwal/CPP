// #include <iostream>
// using namespace std;
// int main(){
//     // //wap to print the no. from 1 to 10
//     // for(int i=1;i<11;i++){
//     //     cout<<i<<endl;
//     // }
// //--------------------------------------------
//     // //WAP to find max between two numbers
//     // int a,b;
//     // cout<<"ENTER 1ST- ";
//     // cin>>a;
//     // cout<<"ENTER 2ND- ";
//     // cin>>b;
//     // if(a>b)cout<<a<<" is bigger";
//     // else if(b>a) cout<<b<<" is bigger";
//     // else cout<<"They are equal";
// //--------------------------------------------
//     // //WAP to find max between three numbers
//     // int a,b,c;
//     // cout<<"ENTER 1ST- ";
//     // cin>>a;
//     // cout<<"ENTER 2ND- ";
//     // cin>>b;
//     // cout<<"ENTER 3RD- ";
//     // cin>>c;
//     // if(a>b){
//     //     if(a>c) cout<<a<<" is bigger";
//     //     else if (c>a) cout<<c<<" is bigger";
//     //     }
//     // else if(b>a){
//     //     if(b>c) cout<<b<<" is bigger";
//     //     else if (c>b) cout<<c<<" is bigger";
//     //     }
//     // else cout<<"They are equal";
// // -------------------------------------------------
//     // int arr1[100],n,key,l,h,mid,i,flag=0;
//     // cout<<"Enter the size of array: ";
//     // cin>>n;
//     // cout<<"enter the array in ascending order: ";
//     // for(i=0;i<n;i++){
//     //     cin>>arr1[i];
//     // }
//     // cout<<"Enter the element to search: ";
//     // cin>>key;
//     // l=0;
//     // h=n-1;
//     // while(l<=h){
//     //     mid=(l+h)/2;
//     //     if(key==arr1[mid]){
//     //         cout<<"Element found at position- "<<mid+1;
//     //         flag=1;
//     //         break;
//     //     }
//     //     else if(key<arr1[mid]){
//     //         h=mid-1;
//     //     }
//     //     else{
//     //         l=mid+1;
//     //     }
//     // }
//     // if (flag==0){
//     //     cout<<"element not found";
//     // }
//  }
// // -----------------------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;
// // struct emp
// // {
// //     int id;
// //     string name;
// //     float fee;
// //     emp *p;
// // }s;
// class emp
// {
//     public:
//     int data;
//     emp *link;
//     // emp *p;
// };
// int main(){
//     emp *e1=new emp;

//     // e1.p=&e2;
//     // e2.p=&e3;
//     // e3.p=NULL;

// }
// ----------------------------------------------------------------------
// #include<iostream>
// using namespace std ;

// class node{
// public:

// int data ;
// node *link ;
// } ;
// class LL {
// public:

// node *head ;
// LL(){
// head = NULL ;
// }

// void create() ;
// void display() ;
// void insert_end() ;
// void insert_begin() ;
// void insert_at_given_position(int p , int el) ;
// } ;

// void LL::display() {
// node *temp = head ;
// cout<<"My Linked List : " ;
// while(temp!=NULL){
// cout<<temp->data <<"==>";
// temp = temp->link ;
// }
// cout<<"NULL"<<endl ;
// }

// void LL::insert_at_given_position(int p , int el){
// node *temp = new node ;
// temp->data = el ;
// temp->link = NULL ;
// int counter = 1 ;
// node *current = head ;
// node *pre = NULL ;

// while (current->link!=NULL && counter<p){
// pre = current ;
// current = current->link ;
// counter++ ;
// }
// if (counter==p){
// pre->link = temp ;
// temp->link = current ;
// }
// else {
// cout<<"\nInvalid Position...!"<<endl ;
// }
// }

// void LL::insert_begin(){
// node *temp = new node ;
// cout<<"\nEnter the Data to insert at Begin : " ;
// cin>>temp->data ;
// temp->link = head ;
// head = temp ;

// }
// void LL::insert_end(){
// node *t = new node ;
// int n ;
// cout<<"\nEnter The Data to insert at Last : " ;
// cin>>n ;
// t->data = n ;
// t->link = NULL ;

// if (head == NULL){
// head = t ;
// }
// else {
// node *temp = head ;
// while (temp->link!=NULL){
// temp = temp->link ;
// }
// temp->link = t ;
// }
// }

// void LL::create(){
// node *t = new node ;
// cout<<"Enter The Data to insert : " ;
// //cin>>t->data ;
// int n ;
// cin>>n ;
// t->data = n ;
// t->link = NULL ;

// if (head == NULL){
// head = t ;
// }
// else {
// node *temp = head ;
// while (temp->link!=NULL){
// temp = temp->link ;
// }
// temp->link = t ;
// }
// } ;
// int main(){

// LL p ;
// int n ;
// cout<<"Enter The Number of Data You Want To create : " ;
// cin>>n ;
// for (int i=0 ; i<n ;++i){
// p.create() ;
// }
// p.display() ;
// p.insert_end() ;
// p.display() ;
// p.insert_begin() ;
// p.display() ;
// p.insert_at_given_position(2,2) ;
// p.display() ;
// return 0 ;
// }
// --------------------------------------------------------------------
// //two way linked list
// #include<iostream>
// using namespace std;

// class node{
// public:
// node *pre;
// int data;
// node *next;
// };
// class DLL
// {
// public:
// node *head;
// node *last;
// DLL()
// {
// head=NULL;
// last=NULL;
// }
// void create();
// void Trav_forward();
// void Trav_backward();
// //insertion
// void insert_end();
// void insert_start();
// void insert_pos(int p,int v);
// //deletion
// void del_start();
// void del_end();
// void del_pos();
// //seacrch
// void search();

// };

// void DLL::create()
// {
// node *t=new node;
// cout<<"Enter the data to insert: ";
// cin>>t->data;
// t->pre=NULL;
// t->next=NULL;
// if(head==NULL)
// {
// head=t;
// last=t;
// }
// else
// {
// node *temp=head;
// while(temp->next!=NULL)
// {
// temp=temp->next;
// }
// temp->next=t;
// t->pre=temp;
// last=t;
// }
// }
// void DLL::Trav_backward()
// {
// node *temp=last;
// if(temp==NULL)
// {
// cout<<"MY DOUBLE LINKED LIST IS EMPTY"<<endl;
// }
// else
// {
// while(temp->pre!=NULL)
// {
// cout<<temp->data<<"==>";
// temp=temp->pre;
// }
// cout<<"NULL\n";
// }
// }
// void DLL::Trav_forward()
// {
// node *t=head;
// if(t==NULL)
// {
// cout<<"MY DOUBLE LINKED LIST IS EMPTY"<<endl;
// }
// else{

// cout<<"\nMy linked list data is: "<<endl;
// while(t!=NULL)
// {
// cout<<t->data<<"==>";
// t=t->next;
// }
// cout<<"NULL\n";
// }

// }
// /*void DLL::insert_end()
// {
// int c;
// cout<<"\nEnter the data to insert at last: ";
// cin>>c;
// node *t=new node;
// t->data=c;
// t->next=NULL;

// if(head==NULL)
// {
// head=t;
// }
// else
// {
// node *temp=head;
// while(temp->next!=NULL)
// {
// temp=temp->link;
// }
// temp->link=t;
// }
// }
// */
// void DLL::insert_start()
// {
// int c;
// cout<<"\nEnter the data to insert at begining: ";
// cin>>c;
// node *t=new node;
// t->data=c;
// t->next=head;
// t->pre=NULL;
// head->pre=t;
// head=t;
// }
// /*void DLL::insert_pos(int p, int v)
// {
// node *t = new node;
// t->data=v;
// t->link=NULL;
// node *curr=head;
// node *pre= NULL;
// int count=1;
// while(curr->link!=NULL & count<p)
// {
// pre=curr;
// curr=curr->link;
// count++;
// }
// if(count==p)
// {
// pre->link=t;
// t->link=curr;
// cout<<"\nADDED SUCCESSFULLY..!";
// }
// else
// cout<<"OUT OF RANGE..!";

// }
// void DLL::del_start()
// {
// node *t=head;
// if(head!=NULL)
// {
// head=head->link;
// delete t;
// cout<<"\nDeleted Successfully";
// }
// else
// cout<<"\nDeletion Not Possible..!";
// }
// void LL::del_end()
// {
// node *cur=head;
// node *pre;
// if(cur=NULL)
// {
// cout<<"\nDeletion is not possible";
// }
// else
// {
// while(cur->link!=NULL)
// {
// pre=cur;
// cur=cur->link;

// }
// pre->link=NULL;

// cout<<"\nLast deleted element: "<<cur->data;
// delete cur;
// }
// }
// void DLL::del_pos()
// {
// int pos,count=1;
// cout<<"ENter the position to delete: ";

// cin>>pos;
// node *pre,*cur=head;
// while(cur->link!=NULL && count<pos)
// {
// pre=cur;
// cur=cur->link;
// count++;
// }
// if(count==pos)
// {
// pre->link=cur->link;
// cout<<"Deleted element: "<<cur->data<<endl;
// delete cur;
// }
// else
// cout<<"\nDeletion is not possible";
// }
// void DLL::search()
// {
// int key,count=1;
// cin>>key;
// node *t=head;
// while(t->link!=NULL)
// {
// if(key==t->data)
// {
// cout<<"Element Found at position: "<<count<<endl;
// break;
// }
// count++;
// t=t->link;
// }
// }
// */
// int main()
// {
// DLL l;
// int n;
// cout<<"Enter the number of data to be entered: ";
// cin>>n;
// for(int i=0;i<n;i++){

// l.create();
// }
// // l.display();
// // l.insert_end();
// // l.display();
// l.insert_start();
// // l.display();
// // l.del_start();
// // l.display();
// // l.del_end();
// //l.del_pos();
// //l.search();
// l.Trav_forward();
// //l.Trav_backward();

// return 0;
// }
// --------------------------------------------------------
// #include <iostream>
// using namespace std;
// class node{
//     public:
//         int data;
//         node *next;

// };
// class CLL{
//     public:
//         node *head, *temp;
//         CLL()    
//         {
//             head=NULL;
//             temp=NULL;

//         }
//         void create();
//         void display();
// };
// void CLL::create(){
//     node *t=new node;
//     cout<<"Enter the data: ";
//     cin>>t->data;
//     t->next=NULL;
//     if(head==NULL){
//         head = t;
//         head->next=t;
//     }
//     else{
//         t->next=head->next;
//         head->next=t;
//         head=t;
//     }

// }
// void CLL::display(){
//     if(head==NULL){
//         cout<<"LIST is Empty";
//     }
//     else{
//         temp=head->next;
//         while(temp->next!=head->next){
//             cout<<temp->data<<"-->";
//             temp=temp->next;
//         }
//         cout<<temp->data<<"-->"<<"NULL";
//     }
// }
// int main(){
//     CLL c;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         c.create();
//     }
    
//     c.display();

// }
// -----------------------------------------------------------------
// #include<iostream>
// #define MAXSIZE 5
// using namespace std;
// class stack
// {
// 	int s[MAXSIZE],top=-1;
// 	public:
// 		stack()
// 		{
// 			top=-1;
// 		}
// 		void push(int );
// 		int pop();
// };
// void stack::push(int x)
// {
// 	if (top==MAXSIZE-1)
// 	cout<<"Stack is overflown..!"<<endl;
// 	else
// 	{
// 		top++;
// 		s[top]=x;
// 	}
// }

// int stack::pop()
// {
// 	if (top==-1)
// 	{
// 	cout<<"Stack is underflown..!"<<endl;
// 	return -1;
//     }
// 	else
// 	{
// 		int t=s[top];
// 		top--;
// 		return t;
// 	}
// }

// int main()
// {
// 	stack s;
// 	cout<<s.pop();
// 	for (int i=0;i<7;i++)
// 	{
// 		int t;
// 		cout<<"\nEnter the data to insert into stack : ";
// 		cin>>t;
// 		s.push(t);
// 	}
	
	
// 	return 0;
// }
