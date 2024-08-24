#include<iostream>
using namespace std;

class Node{
  public:

  int data;
  Node* next;

  //constructor
  Node(int value){
    this->data = value;
    this->next = NULL;
     
  }
};

Node* insertAthead(int value, Node* &head, Node* &tail){
  //LL is empty -> head and tail both Null ko point krte ho
  // it means we creating first node of linked list
  if(head == NULL && tail == NULL){
    //step:1- start creating a new node
    Node* newNode = new Node(value);
    //strp:2- head or tail ko node pe lgao
    head = newNode;
    tail = newNode;
  }
  else{
    //LL is not is not empty
    //phle se node present hai
    //insert at head
    //step:- create node
    Node* newNode = new Node(value);
    //step2-connect this newNode to headnode
    newNode->next = head;
    //step3- head update kro
    head = newNode;
  }
  return head;
}

Node* insertAtTail(int value, Node* &head, Node* &tail){
  if(head == NULL && tail == NULL){
    //LL is empty
    // iska mtlb abhi tum first node create krne jaa rhe ho
    //steps: create node, head on that node, tail on that node
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else{
    // LL is not empty
    //step: create node
    Node* newNode = new Node(value);
    //step2: tail node ko new node se connect kro
    tail->next = newNode;
    //step3: tail update
    tail = newNode;
  }
  return head;
}

  void print(Node* head){
    Node* temp = head;
    // jab tk mera temp null nahi hai tb tk node print krte rho
    while(temp!=NULL){
      cout<< temp -> data <<"->";
      temp  = temp-> next;
    }
    cout <<"NULL"<< endl;

}

int getLength(Node* head){
  int len = 0;
  Node* temp = head;

  while(temp!= NULL){
    temp = temp->next;
    len++;
  }
  return len;
}

void insertAtPosition( int position, int value, Node* &head, Node* &tail){
  int length = getLength(head);
  if(position == 1){
    //insert at head krna chata hu
    head = insertAthead(value, head, tail);
  }
  else if(position == length+1){
    //insert at tail krna chata hu
     insertAtTail(value, head, tail);
  }
  else{
    //insert in between krna chahta hu
    Node* temp = head;
    for(int i=0; i<position-2; i++){
      temp = temp -> next;
    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

bool searchLL(int target, Node* head){
  Node* temp = head;
  while(temp!= NULL){
    if(temp ->data == target){
      return true;
    }
    temp = temp->next;
  }
  //is point tk poori LL traverse ho chuki hai 
  // or target nhi mila to return false krdo
  return false;
}

void deleteNodeFromAll(int position, Node* &head, Node* &tail){
  //if LL is empty, then we cannot delete
  if(head == NULL && tail == NULL){
    cout<<"no node to delete"<<endl;
    return;
  }
  //single node in LL
  if(head == tail){
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
  }

  else{
    // multiple nodes inside LL
    //2 Case
    //first case -> pos = 1 delete krna chahte h
    if(position == 1){
      Node* temp = head;
      head = temp->next;
      temp->next = NULL;
      delete temp;
    }
    else{
      //any other node except the first one
      Node* prev = head;
      for(int i = 0; i<position-2; i++){
        prev = prev -> next;
      }
      Node* curr = prev -> next;
      Node* forward = curr -> next;
      prev->next = forward;
      curr->next = NULL;
      delete curr;
    }
  }
}

int main(){

  Node* head = NULL;
  Node* tail = NULL;
  //LL is empty
  head = insertAtTail(101,head,tail);
 // print(head);
  //101 -> NULL
  head = insertAtTail(102,head,tail);
  //print(head);
  //101->102->NULL
  head = insertAtTail(102,head,tail);
// print(head);
  //101->102->103->NULL

  insertAtPosition(1, 42, head, tail);
 //   print(head);

  insertAtPosition(4, 57, head, tail);
   print(head);

  //cout<<searchLL(103,head); 
  deleteNodeFromAll(3,head,tail);
    print(head);
  // Node* head = NULL;
  // Node* tail = NULL;
  // //LL IS EMPTY
  // head = insertAthead(10, head, tail);
  //   print(head);
  // //10-> NULL
  // head = insertAthead(20, head, tail);
  // //20->10->NULL
  // print(head);
  // head = insertAthead(30, head, tail);
  // //30->10->NULL
  // print(head);
  // //stack
  // //Node first;
  // //dynamic memory
  // //Node* first = new Node(10);
  return 0;
}; 