#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        int data;
        prev=next=NULL;
    }
};
class Doublylist{
    Node*head;
     Node*tail;

     public:
     Doublylist(){
        head=tail=NULL;
     }
     void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head=tail=newNode;
        }
        else{
            newNode->next =head;
            newNode->prev = newNode;
            head= newNode;
        }
     }
     void print(){
        Node* temp = head;

        while(temp!= NULL){
            cout<<temp->data<<"<=>";
            temp =temp->next;v 
        }
        cout<<"NULL\n";
     }

     void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->prev = tail;
            tail->next = newNode;
            tail= newNode;
        }
     }
     void pop_front(){
        if(head ==NULL){
            cout<<"DLL is empty";
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
     }
     void pop_back(){
        if(head== NULL){
            cout<<"DLL is empty";
            return;
        }
       Node* temp = tail;
       tail= tail->prev;

       if(tail != NULL){
        tail->next = NULL;
       }
       temp->prev = NULL;
       delete temp;
     }
};

int main()
{
    return 0;
}