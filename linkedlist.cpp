// #include<iostream>
// #include<map>
// using namespace std;

// class Node {

//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data) {
//         this -> data = data;
//         this -> next = NULL;
//     }

//     //destructor
//     ~Node() {
//         int value = this -> data;
//         //memory free
//         if(this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }

// };

// void insertAtHead(Node* &head, int d) {

//     // new node create
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail, int d) {
//      // new node create
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail  = temp;
// }

// void print(Node* &head) {

//     if(head == NULL) {
//         cout << "List is empty "<< endl;
//         return ;
//     }
//     Node* temp = head;

//     while(temp != NULL ) {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


//     //insert at Start
//     if(position == 1) {
//         insertAtHead(head, d);
//         return;
//     }

//     Node* temp  = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //inserting at Last Position
//     if(temp -> next == NULL) {
//         insertAtTail(tail,d);
//         return ;
//     }

//     //creating a node for d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp -> next;

//     temp -> next = nodeToInsert;
// }

// void deleteNode(int position, Node* & head) { 

//     //deleting first or start node
//     if(position == 1) {
//         Node* temp = head;
//         head = head -> next;
//         //memory free start ndoe
//         temp -> next = NULL;
//         delete temp;
//     }
//     else
//     {
//         //deleting any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         prev -> next = curr -> next;
//         curr -> next  = NULL;
//         delete curr;

//     }
// }


// int main() {
    
//     //created a new node
//     Node* node1 = new Node(10);
//     //cout << node1 -> data << endl;
//    // cout << node1 -> next << endl;
    
//     //head pointed to node1
//     Node* head = node1; 
//     Node* tail = node1;
//     //print(head);

//     insertAtTail(tail, 12);

//     //print(head);
    
//     insertAtTail(tail, 15);
//     //print(head);

//     insertAtPosition(tail,head, 4, 22);
//     //print(head);    

//     //cout << "head " << head -> data << endl;
//     //cout << "tail " << tail -> data << endl;

//     //deleteNode(4, head);
    

//     tail -> next = head ->next;

//     cout << "head " << head -> data << endl;
//     cout << "tail " << tail -> data << endl;
//     //print(head);
//     return 0;
// }
// // ---------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     //constructor- isko complier automatically execute krdeta hai jb bhi us class ka koi naya memeber bnta hai.
//     node(int data){ 
//         this->data=data;
//         this->next=NULL;
//         //this keyword in C++ is an implicit pointer that points to the object of the class of which the member function is called. Every object has its own this pointer. Every object can reference itself by this pointer.
//     }
// };
// void insertAtHead(node* &head,int d){
//     node* temp= new node(d);
//     temp->next = head;
//     head=temp;
// }
// void print(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     } 
// }
// int main(){

//     node* node1=new node(10);
//     node* head= node1;
//     print(head);
//     cout<<endl;
//     insertAtHead(head,12);
//     print(head);
    

// }
// --------------------------------------------------------------------------------
#include<iostream>
using namespace std ;

class node{
public:

int data ;
node *link ;
} ;

class LL {
public:

node *head ;
LL(){
head = NULL ;
}

void create() ;
void display() ;
void insert_end() ;
void insert_begin() ;
void insert_at_given_position(int p , int el) ;
} ;

void LL::display() {
node *temp = head ;
cout<<"My Linked List : " ;
while(temp!=NULL){
cout<<temp->data <<"==>";
temp = temp->link ;
}
cout<<"NULL"<<endl ;
}

void LL::insert_at_given_position(int p , int el){
node *temp = new node ;
temp->data = el ;
temp->link = NULL ;
int counter = 1 ;
node *current = head ;
node *pre = NULL ;

while (current->link!=NULL && counter<p){
pre = current ;
current = current->link ;
counter++ ;
}
if (counter==p){
pre->link = temp ;
temp->link = current ;
}
else {
cout<<"\nInvalid Position...!"<<endl ;
}
}

void LL::insert_begin(){
node *temp = new node ;
cout<<"\nEnter the Data to insert at Begin : " ;
cin>>temp->data ;
temp->link = head ;
head = temp ;

}
void LL::insert_end(){
node *t = new node ;
cout<<"\nEnter The Data to insert at Last : " ;
cin>>t->data;
t->link = NULL ;

if (head == NULL){
head = t ;
}
else {
node *temp = head ;
while (temp->link!=NULL){
temp = temp->link ;
}
temp->link = t ;
}
}

void LL::create(){
node *t = new node ;
cout<<"Enter The Data to insert : " ;
cin>>t->data ;
t->link = NULL ;

if (head == NULL){
head = t ;
}
else {
node *temp = head ;
while (temp->link!=NULL){
temp = temp->link ;
}
temp->link = t ;
}
} ;
int main(){
LL p ;
int n ;
cout<<"Enter The Number of Data You Want To create : " ;
cin>>n ;
for (int i=0 ; i<n ;++i){
p.create() ;
}
p.display() ;
p.insert_end() ;
p.display() ;
p.insert_begin() ;
p.display() ;
p.insert_at_given_position(2,2) ;
p.display() ;
return 0 ;
}


