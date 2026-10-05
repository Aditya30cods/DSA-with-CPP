#include<iostream>
#include<vector>
using namespace std;

class Node{      //NODE CREATION
    public:
    int data;    //node value
    Node* Next;   //next pointer
    Node(int val){
        data= val;
        Next = NULL;
    }
};
class List{            //storing node in linkedlist
   Node* head;        //HEAD POINTER
   Node* tail;        // TAIL POINTER
   public:
   List(){
    head= tail= NULL;
   }

   //PUSHFRONT
   void push_front(int val){
   Node* newNode = new Node (val);
    if(head== NULL){
        head = tail = newNode;
        return;
    } 
    else{
        newNode -> Next = head;
        head = newNode;
    }
}
     //PRINTING LL

     void print(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp -> data<<"->";
            temp = temp -> Next;
        }
        cout<<"NULL"<<endl;
     }

     //POPFRONT

  void pop_front(){
           if(head== NULL){
       cout<<"LL is empty";
       return;
    }
    Node* temp =head;
    head = head -> Next;
    temp -> Next = NULL;
    delete temp;
}
    //POPBack

    void pop_back(){
        if(head== NULL){
            cout<<"LL is empty";
            return;
        }
        Node* temp = head;
        while(temp -> Next != tail){  
            temp= temp -> Next;  //FINDING LAST NODE
        }
        temp -> Next = NULL;    //CREATING NEW PAIR
        delete tail;
        tail= temp;
    }

    //INSERT IN MIDDLE OF LL

    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid POS";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp -> Next;
        }
        Node* newNode = new Node(val);
        newNode -> Next = temp -> Next;
        temp -> Next = newNode;
    }
   //SEARCH IN A LINKEDLIST

   int search(int key){
    Node* temp = head;
    int idx=0;

    while(temp != NULL){
        if(temp -> data == key){
            return idx;
        }
        temp = temp -> Next;
        idx++;
    }
    return -1;
   }

};
int main()
{
    List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(4);

  ll.print();

 cout<< ll.search(1);
    return 0;
}